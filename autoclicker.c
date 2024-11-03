#include <windows.h>

int main() {
    const int INTERVAL = 50;

    while (1)
        while (GetAsyncKeyState('Z') & 0x8000) {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            Sleep(50);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(INTERVAL);
        }
}
