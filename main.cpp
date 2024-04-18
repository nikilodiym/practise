#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 0x06);
	cout << "Hello World!" << endl;
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "/Bjarne Stroustrup/" << endl;

	system("pause");
	return 0;
}