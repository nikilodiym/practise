#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	cout << "Продам цуценят." << endl;
	cout << "Порода: ротвейлер." << endl;
	cout << "……" << endl;
	cout << "Тел.: 222-22-22" << endl;
	cout << "222     |   ";
	SetConsoleTextAttribute(hConsole, 0x06);
	cout << "222  ";
	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "|" << endl;
	cout << "22      |   ";
	SetConsoleTextAttribute(hConsole, 0x06);
	cout << "22   ";
	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "|" << endl;
	cout << "22      |   ";
	SetConsoleTextAttribute(hConsole, 0x06);
	cout << "22   ";
	SetConsoleTextAttribute(hConsole, 0x07);
	cout << "|" << endl;

	system("pause");
	return 0;

}