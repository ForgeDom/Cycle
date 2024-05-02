#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int x, y;
	int begin = 1;
	int i = 0;

	cin >> x >> y;

	while (i < y) {
		begin *= x;
		++i;
	}
	cout << begin << endl;
	return 0;
}