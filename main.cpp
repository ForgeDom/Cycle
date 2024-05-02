#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	int sum = 0;
	cin >> a;
	
	do {
		sum += a;
		++a;
	} while (1 <= a && a <= 20);
	cout << sum << endl;
	return 0;
}