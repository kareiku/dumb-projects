#include <stdio.h>
#include <windows.h>

int main() {
    int INTERVAL;
    char KEY;

    printf("Input key and interval with the format \"KEY:INTERVAL\": ");
    scanf("%c:%d", &KEY, &INTERVAL);

    while (1)
        while (GetAsyncKeyState(KEY) & 0x8000) {
            mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
            Sleep(50);
            mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
            Sleep(INTERVAL);
        }
}
