#include <iostream>
#include <conio.h>
#include <Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

using std::cout;
using std::endl;
using std::cin;

int main()
{
	const char* name = "The war and the peace";
	const char* author = "L.N. Tolstoj";
	const char* publisher = "Piter";
	short int pages = 500;

	cout << "\t\tName\t   : ";
	SetConsoleTextAttribute(hConsole, 6);
	cout << "\"" << name << "\"" << endl;
	SetConsoleTextAttribute(hConsole, 7);

	cout << "\t\tAvtor\t   :   " << author << endl;

	cout << "\t\tIzdatelstvo:  " << publisher << endl;

	cout << "\t\tPages\t   : ";
	SetConsoleTextAttribute(hConsole, 5);
	cout << pages << endl;
	SetConsoleTextAttribute(hConsole, 7);

	_getch();
	return 0;
}
