#include "cheats/aimbot.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance,
    LPSTR lpCmdLine, int nCmdShow)
{
    aimbot::procID = memory::GetProcID(L"cs2.exe");
    aimbot::moduleBase = memory::GetModuleBaseAddress(aimbot::procID, L"client.dll");

    while (true) {
        aimbot::trigger();
        if (GetAsyncKeyState(VK_LSHIFT))
            aimbot::frame();
    }
    return 0;
}
