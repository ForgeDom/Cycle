#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int a, b;
	
	cin >> a >> b;
	while (a <= b) {
		cout << a << endl;
		++a;
	}
	return 0;
}