#include <windows.h>

void ShowMB()
{
    MessageBox(
            NULL,
            "Ratted",
            "Rat",
            MB_CANCELTRYCONTINUE | MB_ICONERROR
            );
}

int main()
{
    while (true)
    {
        ShowMB();
        Sleep(10);
    }
}