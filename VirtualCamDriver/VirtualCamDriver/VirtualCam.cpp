// ======================================================
// VirtualCam.cpp
// Minimal Windows DLL skeleton for Virtual Camera project
// ======================================================

#include <windows.h>

// ------------------------------------------------------
// Global module handle (used later for COM registration)
// ------------------------------------------------------
HMODULE g_hModule = nullptr;

// ------------------------------------------------------
// DllMain
// This is REQUIRED for every Windows DLL
// ------------------------------------------------------
BOOL APIENTRY DllMain(
    HMODULE hModule,
    DWORD  ul_reason_for_call,
    LPVOID lpReserved
)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        g_hModule = hModule;
        break;

    case DLL_PROCESS_DETACH:
        break;
    }

    return TRUE;
}

// ------------------------------------------------------
// DllRegisterServer
// REQUIRED for regsvr32
// ------------------------------------------------------
extern "C" __declspec(dllexport)
HRESULT __stdcall DllRegisterServer(void)
{
    // For now we just return success.
    // Real COM + virtual camera registration
    // will be added in the next stage.
    return S_OK;
}

// ------------------------------------------------------
// DllUnregisterServer
// REQUIRED for regsvr32 /u
// ------------------------------------------------------
extern "C" __declspec(dllexport)
HRESULT __stdcall DllUnregisterServer(void)
{
    return S_OK;
}
