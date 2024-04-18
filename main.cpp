#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "Hello World!" << endl;
	cout << "\\\\Dennis Ritchi\\\\" << endl;

	system("pause");
	return 0;

}