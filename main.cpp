#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	int sum = 0;

	cin >> n;

	while (n != 0) {
		cin >> n;
		sum += n;
	}
	cout << sum << endl;
	return 0;
}