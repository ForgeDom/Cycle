#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	cout << "Скільки ящиків на складі?" << endl;
	cin >> a;
	int b;
	cout << "Скільки ящиків вміщується в 1 машину?" << endl;
	cin >> b;
	int cars = 0;
	if (a < 0) {
		cout << "Error" << endl;
	}
	while (a != 0) {
		a -= b;
		cars++;
	}
	cout << "Необхідно" << cars << "машин!" << endl;
	return 0;
}