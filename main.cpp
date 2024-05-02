#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b;
	cin >> a >> b;
	int sum = 0;

	while (a <= b) {
		if (a % 2 != 0) {
			sum += a;
			
		}
		++a;
	}
	cout << sum << endl;
	return 0;
}