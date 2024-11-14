#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

short int input(short int number);

int main()
{
	short int R1 = input(1);
	short int R2 = input(2);
	short int R3 = input(3);

	float first_action = (1.0 / R1) + (1.0 / R2) + (1.0 / R3);
	float result = 1 / first_action;

	cout << endl;

	cout << "Formula: (1 / R0) = (1 / R1) + (1 / R2) + (1 / R3)" << endl;
	cout << "(1 / R0) = " << result << endl;

	_getch();
	return 0;
}

short int input(short int number)
{
	short int result;

	cout << "Enter R" << number << ": ";
	cin >> result;

	return result;
}