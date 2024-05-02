#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int k;
	int i = 1;
	
	cin >> k;
	while (i <= 10) {
		cout << k << "*" << i << "=" << k * i << endl;
		++i;
	}
	return 0;
}