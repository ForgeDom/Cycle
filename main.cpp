#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a;
	int sum = 0;

	cin >> a;
	if (a <= 500) {
		while (a <= 500) {
			sum += a;
			a++;
		}
	}
	cout << sum << endl;
	return 0;
}