#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	cout << "������ ����� �� �����?" << endl;
	cin >> a;
	int b;
	cout << "������ ����� �������� � 1 ������?" << endl;
	cin >> b;
	int cars = 0;
	while (a != 0) {
		a -= b;
		cars++;
	}
	cout << "���������" << cars << "�����!" << endl;
	return 0;
}