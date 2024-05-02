#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int sum = 0;
	int next = 0;

	while (next < 1000) {
		sum += next + 1;
		next++;
	}
	double average = static_cast<double>(sum) / next;
	cout << average<< endl;
	return 0;
}