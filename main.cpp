#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	float pi = 3.14; // I could have used the math.h library, but the task specifies exactly this number

	short int length;

	cout << "Enter the length of the circle (in meters): ";
	cin >> length;
	
	cout << endl;

	cout << "Formulas" << endl;
	cout << "|-- L = 2 * pi * R" << endl;
	cout << "| ==> R = L / 2 * pi" << endl;
	cout << "| ==> S = pi * R^2" << endl;

	cout << endl;

	float radius = length / (2 * pi);
	float square = pi * pow(radius, 2);
	
	cout << "S = " << square << " m^2" << endl;

	_getch();
	return 0;
}