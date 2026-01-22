// ======================================================
// VirtualCamInstaller.cpp
// Registers a system-wide Media Foundation Virtual Camera
// ======================================================

#include <windows.h>
#include <mfapi.h>
#include <mfvirtualcamera.h>
#include <iostream>

#pragma comment(lib, "mfplat.lib")
#pragma comment(lib, "mfuuid.lib")

int main()
{
    HRESULT hr = MFStartup(MF_VERSION);
    if (FAILED(hr))
    {
        std::cout << "MFStartup failed\n";
        return -1;
    }

    IMFVirtualCamera* virtualCam = nullptr;

    // Create a SYSTEM-WIDE virtual camera
    hr = MFCreateVirtualCamera(
        MFVirtualCameraType_SoftwareCamera,
        MFVirtualCameraLifetime_System,
        L"Femi Virtual Camera",
        L"Femi.VirtualCam",
        nullptr,
        &virtualCam
    );

    if (FAILED(hr))
    {
        std::cout << "MFCreateVirtualCamera failed\n";
        MFShutdown();
        return -1;
    }

    std::cout << "Virtual camera registered successfully\n";

    virtualCam->Release();
    MFShutdown();
    return 0;
}
