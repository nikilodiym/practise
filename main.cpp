#include <iostream>
#include <Windows.h>
using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "To be, ";
	SetConsoleTextAttribute(hConsole, 0x04);
	cout << "or not ";
	SetConsoleTextAttribute(hConsole, 0x0F);
	cout << "to be: that is the question: " << endl;
	cout << "Whether ";
	SetConsoleTextAttribute(hConsole, 0x06);
	cout << "tis nobler in the mind to suffer. The slings and arrows of outrageous fortune, Or to take arms against a sea of troubles, And by opposing end them? " << endl;
	cout << "William Shakespeare" << endl;

	system("pause");
	return 0;
}