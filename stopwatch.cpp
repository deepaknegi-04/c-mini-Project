#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

int main() {
    int HH = 0, MM = 0, SS = 0;

    cout << "\n\t\tStopwatch";
    cout << "\n\t\tHH: MM: SS";
    cout << "\n\t\t" << HH << " : " << MM << " : " << SS;
    cout << "\n\t\tPress any key to start";

    _getch();

    while (!_kbhit()) {
        SS++;
        Sleep(1000); // Wait for 1 second

        if (SS > 59) {
            MM++;
            SS = 0;
        }
        if (MM > 59) {
            HH++;
            MM = 0;
        }

        system("cls"); // Clear the screen
        cout << "\n\t\tStopwatch";
        cout << "\n\t\tHH: MM: SS";
        cout << "\n\t\t" << HH << " : " << MM << " : " << SS;
        cout << "\n\t\tPress any key to stop";
    }

    _getch();
    cout << "\n\t\tThe time after pausing is:";
    cout << "\n\t\t" << HH << " : " << MM << " : " << SS;

    _getch();
    return 0;
}
