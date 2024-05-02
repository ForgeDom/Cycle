#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int c, d;
	int sum = 0;

	cin >> c >> d;
	do {
		sum += c;
		c++;
	} while (c<=d);
	cout << sum << endl;
	return 0;
}