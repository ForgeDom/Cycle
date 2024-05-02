#include <iostream>
#include <Windows.h>
#include <ctime>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b;
    int choice;

    srand(time(nullptr));

    cin >> a >> b;
    cin >> choice;

    switch (choice) {
    case 1:
        while (a <= b) {
            int color = rand() % 8 + 30;
            cout << "\033[" << color << "m" << a << "\033[0m" << endl;
            ++a;
        }
        break;
    case 2:
        do {
            if (a % 2 == 0) {
                int color = rand() % 8 + 30;
                cout << "\033[" << color << "m" << a << "\033[0m" << endl;
            }
            ++a;
        } while (a <= b);
        break;
    case 3:
        while (a <= b) {
            if (a % 2 != 0) {
                int color = rand() % 8 + 30;
                cout << "\033[" << color << "m" << a << "\033[0m" << endl;
            }
            ++a;
        }
        break;
    case 4:
        do {
            if (a % 7 == 0) {
                int color = rand() % 8 + 30;
                cout << "\033[" << color << "m" << a << "\033[0m" << endl;
            }
            ++a;
        } while (a <= b);
        break;
    default:
        cout << "Error" << endl;
    }

    return 0;
}
