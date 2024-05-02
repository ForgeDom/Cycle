#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int L, P;
	cin >> L >> P;
	int pillow = 0;
	while (L >= P) {
		L -= P;
		pillow++;
	}
	cout << pillow << endl;

	return 0;
}