#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a , choise;
	char b;
	cout << "������ ������� �������: " << endl;
	cin >> a;

	cout << "������ ��� �������: " << endl;
	cin >> b;

	cout << "�������������(1)/�����������(2)?" << endl;
	cin >> choise;

	switch (choise) {
		case 1:
			while (a > 0) {
				cout << b << "";
				--a;
			}
			cout << endl;
			break;
		case 2:
			while (a > 0) {
				cout << b << endl;
				--a;
			}
			break;
	}	
	return 0;
}