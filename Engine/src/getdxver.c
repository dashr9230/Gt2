
// File: C:\CodePrj\Gt2\Engine\src\getdxver.c

/*
 * ModName: .\Debug\getdxver.obj
 * (000004) Start search for segment 0x1 at symbol 0x90(000010) S_OBJNAME: Signature: 00000000, C:\CodePrj\Gt2\engine\Debug\getdxver.obj
 * 
 * (000044) S_COMPILE:
 *          Language: C
 *          Target processor: Pentium
 *          Floating-point precision: 0
 *          Floating-point package: hardware
 *          Ambient data: NEAR
 *          Ambient code: NEAR
 *          PCode present: 0
 *          Compiler Version: Microsoft (R) 32-bit C/C++ Optimizing Compiler Version 12.00.8447.0
 */

#include <Windows.h>
#include <dinput.h>

/*
 * (000204) S_GDATA32: [0002:00000808], Type:             0x1011, IID_IDirectDraw2
 * (000224) S_GDATA32: [0002:00000848], Type:             0x1011, IID_IDirectDrawSurface3
 * (00024C) S_GDATA32: [0002:00000858], Type:             0x1011, IID_IDirectDrawSurface4
 */
#include <ddraw.h>

typedef HRESULT(WINAPI* DIRECTDRAWCREATE)(GUID*, LPDIRECTDRAW*, IUnknown*);
typedef HRESULT(WINAPI* DIRECTINPUTCREATE)(HINSTANCE, DWORD, LPDIRECTINPUT*, IUnknown*);

/*
 * (000090) S_GPROC32: [0001:00097F90], Cb: 000004E5, Type:             0x1D6F, GetDXVersion
 *          Parent: 00000000, End: 00000200, Next: 00000000
 *          Debug start: 00000009, Debug end: 000004DF
 *          Flags: Frame Ptr Present
 * 
 * (0000C4)  S_BPREL32: [00000008], Type:   T_32PULONG(0422), pdwDXVersion
 * (0000E0)  S_BPREL32: [0000000C], Type:   T_32PULONG(0422), pdwDXPlatform
 * (0000FC)  S_BPREL32: [FFFFFED8], Type:             0x109D, pDDraw
 * (000110)  S_BPREL32: [FFFFFEDC], Type:             0x1D70, pDDraw2
 * (000124)  S_BPREL32: [FFFFFEE0], Type:             0x15C5, DDHinst
 * (000138)  S_BPREL32: [FFFFFEE4], Type:             0x104D, pSurf
 * (00014C)  S_BPREL32: [FFFFFEE8], Type:       T_LONG(0012), hr
 * (00015C)  S_BPREL32: [FFFFFEEC], Type:             0x1E14, DirectInputCreateA
 * (00017C)  S_BPREL32: [FFFFFEF0], Type:             0x1E16, osVer
 * (000190)  S_BPREL32: [FFFFFF84], Type:             0x1E1A, DirectDrawCreate
 * (0001B0)  S_BPREL32: [FFFFFF88], Type:             0x15C5, DIHinst
 * (0001C4)  S_BPREL32: [FFFFFF8C], Type:             0x112D, pSurf4
 * (0001D8)  S_BPREL32: [FFFFFF90], Type:             0x1E1B, pSurf3
 * (0001EC)  S_BPREL32: [FFFFFF94], Type:             0x101F, desc
 * 
 * (000200) S_END
 */
void GetDXVersion(PDWORD pdwDXVersion, PDWORD pdwDXPlatform)
{
	HRESULT hr;
	HINSTANCE DDHinst = 0;
	HINSTANCE DIHinst = 0;
	LPDIRECTDRAW pDDraw = 0;
	LPDIRECTDRAW2 pDDraw2 = 0;
	DIRECTDRAWCREATE DirectDrawCreate = 0;
	DIRECTINPUTCREATE DirectInputCreate = 0;
	OSVERSIONINFO osVer;
	LPDIRECTDRAWSURFACE pSurf = 0;
	LPDIRECTDRAWSURFACE3 pSurf3 = 0;
	LPDIRECTDRAWSURFACE4 pSurf4 = 0;

	/*
	 * First get the windows platform
	 */
	osVer.dwOSVersionInfoSize = sizeof(osVer);
	if (!GetVersionEx(&osVer))
	{
		*pdwDXVersion = 0;
		*pdwDXPlatform = 0;
		return;
	}

	if (osVer.dwPlatformId == VER_PLATFORM_WIN32_NT)
	{
		*pdwDXPlatform = VER_PLATFORM_WIN32_NT;
		/*
		 * NT is easy... NT 4.0 is DX2, 4.0 SP3 is DX3, 5.0 is DX5
		 * and no DX on earlier versions.
		 */
		if (osVer.dwMajorVersion < 4)
		{
			*pdwDXPlatform = 0;//No DX on NT3.51 or earlier 
			return;
		}
		if (osVer.dwMajorVersion == 4)
		{
			/*
			 * NT4 up to SP2 is DX2, and SP3 onwards is DX3, so we are at least DX2
			 */
			*pdwDXVersion = 0x200;

			/*
			 * We're not supposed to be able to tell which SP we're on, so check for dinput
			 */
			DIHinst = LoadLibrary("DINPUT.DLL");
			if (DIHinst == 0)
			{
				/*
				 * No DInput... must be DX2 on NT 4 pre-SP3
				 */
				OutputDebugString("Couldn't LoadLibrary DInput\r\n");
				return;
			}

			DirectInputCreate = (DIRECTINPUTCREATE)
				GetProcAddress(DIHinst, "DirectInputCreateA");
			FreeLibrary(DIHinst);

			if (DirectInputCreate == 0)
			{
				/*
				 * No DInput... must be pre-SP3 DX2
				 */
				OutputDebugString("Couldn't GetProcAddress DInputCreate\r\n");
				return;
			}

			/*
			 * It must be NT4, DX2
			 */
			*pdwDXVersion = 0x300;  //DX3 on NT4 SP3 or higher
			return;
		}
		/*
		 * Else it's NT5 or higher, and it's DX5a or higher:
		 */

		 /*
		  * Drop through to Win9x tests for a test of DDraw (DX6 or higher)
		  */
	}
	else
	{
		/*
		 * Not NT... must be Win9x
		 */
		*pdwDXPlatform = VER_PLATFORM_WIN32_WINDOWS;
	}

	/*
	 * Now we know we are in Windows 9x (or maybe 3.1), so anything's possible.
	 * First see if DDRAW.DLL even exists.
	 */
	DDHinst = LoadLibrary("DDRAW.DLL");
	if (DDHinst == 0)
	{
		*pdwDXVersion = 0;
		*pdwDXPlatform = 0;
		FreeLibrary(DDHinst);
		return;
	}

	/*
	 *  See if we can create the DirectDraw object.
	 */
	DirectDrawCreate = (DIRECTDRAWCREATE)
		GetProcAddress(DDHinst, "DirectDrawCreate");
	if (DirectDrawCreate == 0)
	{
		*pdwDXVersion = 0;
		*pdwDXPlatform = 0;
		FreeLibrary(DDHinst);
		OutputDebugString("Couldn't LoadLibrary DDraw\r\n");
		return;
	}

	hr = DirectDrawCreate(NULL, &pDDraw, NULL);
	if (FAILED(hr))
	{
		*pdwDXVersion = 0;
		*pdwDXPlatform = 0;
		FreeLibrary(DDHinst);
		OutputDebugString("Couldn't create DDraw\r\n");
		return;
	}

	/*
	 *  So DirectDraw exists.  We are at least DX1.
	 */
	*pdwDXVersion = 0x100;

	/*
	 *  Let's see if IID_IDirectDraw2 exists.
	 */
	hr = IDirectDraw_QueryInterface(pDDraw, &IID_IDirectDraw2, (LPVOID*)&pDDraw2);
	if (FAILED(hr))
	{
		/*
		 * No IDirectDraw2 exists... must be DX1
		 */
		IDirectDraw_Release(pDDraw);
		FreeLibrary(DDHinst);
		OutputDebugString("Couldn't QI DDraw2\r\n");
		return;
	}

	/*
	 * IDirectDraw2 exists. We must be at least DX2
	 */
	IDirectDraw2_Release(pDDraw2);
	*pdwDXVersion = 0x200;

	/*
	 *  See if we can create the DirectInput object.
	 */
	DIHinst = LoadLibrary("DINPUT.DLL");
	if (DIHinst == 0)
	{
		/*
		 * No DInput... must be DX2
		 */
		OutputDebugString("Couldn't LoadLibrary DInput\r\n");
		IDirectDraw_Release(pDDraw);
		FreeLibrary(DDHinst);
		return;
	}

	DirectInputCreate = (DIRECTINPUTCREATE)
		GetProcAddress(DIHinst, "DirectInputCreateA");
	FreeLibrary(DIHinst);

	if (DirectInputCreate == 0)
	{
		/*
		 * No DInput... must be DX2
		 */
		FreeLibrary(DDHinst);
		IDirectDraw_Release(pDDraw);
		OutputDebugString("Couldn't GetProcAddress DInputCreate\r\n");
		return;
	}

	/*
	 * DirectInputCreate exists. That's enough to tell us that we are at least DX3
	 */
	*pdwDXVersion = 0x300;

	/*
	 * Checks for 3a vs 3b?
	 */

	/*
	 * We can tell if DX5 is present by checking for the existence of IDirectDrawSurface3.
	 * First we need a surface to QI off of.
	 */
	DDSURFACEDESC desc;

	ZeroMemory(&desc, sizeof(desc));
	desc.dwSize = sizeof(desc);
	desc.dwFlags = DDSD_CAPS;
	desc.ddsCaps.dwCaps = DDSCAPS_PRIMARYSURFACE;

	hr = IDirectDraw_SetCooperativeLevel(pDDraw, NULL, DDSCL_NORMAL);
	if (FAILED(hr))
	{
		/*
		 * Failure. This means DDraw isn't properly installed.
		 */
		IDirectDraw_Release(pDDraw);
		FreeLibrary(DDHinst);
		*pdwDXVersion = 0;
		OutputDebugString("Couldn't Set coop level\r\n");
		return;
	}

	hr = IDirectDraw_CreateSurface(pDDraw, &desc, &pSurf, NULL);
	if (FAILED(hr))
	{
		/*
		 * Failure. This means DDraw isn't properly installed.
		 */
		IDirectDraw_Release(pDDraw);
		FreeLibrary(DDHinst);
		*pdwDXVersion = 0;
		OutputDebugString("Couldn't CreateSurface\r\n");
		return;
	}

	/*
	 * Try for the IDirectDrawSurface3 interface. If it works, we're on DX5 at least
	 */
	if (FAILED(IDirectDrawSurface_QueryInterface(pSurf, &IID_IDirectDrawSurface3, (LPVOID*)&pSurf3)))
	{
		IDirectDraw_Release(pDDraw);
		FreeLibrary(DDHinst);
		return;
	}

	/*
	 * QI for IDirectDrawSurface3 succeeded. We must be at least DX5
	 */
	*pdwDXVersion = 0x500;

	/*
	* Try for the IDirectDrawSurface4 interface. If it works, we're on DX6 at least
	*/
	if (FAILED(IDirectDrawSurface_QueryInterface(pSurf, &IID_IDirectDrawSurface4, (LPVOID*)&pSurf4)))
	{
		IDirectDraw_Release(pDDraw);
		FreeLibrary(DDHinst);

		return;
	}
	
	/*
	 * QI for IDirectDrawSurface4 succeeded. We must be at least DX6
	 */
	*pdwDXVersion = 0x600;

	IDirectDrawSurface_Release(pSurf);
	IDirectDraw_Release(pDDraw);
	FreeLibrary(DDHinst);

	return;
}

