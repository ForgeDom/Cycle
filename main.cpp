#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	int i = 1;
	int fact = 1;
	cin >> n;

	if (n < 0) {
		cout << "Error" << endl;
	}
	else {
		while (i <= n) {
			fact *= i;
			++i;
		}
		cout << fact << endl;
	}
	return 0;
}