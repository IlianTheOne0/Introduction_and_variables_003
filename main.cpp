#include <iostream>
#include <conio.h>
#include <Windows.h>

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

using std::cout;
using std::endl;
using std::cin;

int main()
{
	SetConsoleTextAttribute(hConsole, 6);

	cout << "\"U lukomor'a dub zelenij," << endl;
	cout << " Zlataya zep na dupe tom," << endl;
	cout << " I dnem i nochju kot uchenij" << endl;
	cout << " vse hodit po cepi krugom\"" << endl;

	SetConsoleTextAttribute(hConsole, 7);

	_getch();
	return 0;
}