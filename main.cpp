#include <iostream>
#include <conio.h>

using std::cout;
using std::endl;
using std::cin;

int main()
{
	short int speed;
	short int time;
	short int acceleration;

	cout << "Enter the speed (in meters/seconds): ";
	cin >> speed;

	cout << "Enter the acceleration (in meters/seconds^2): ";
	cin >> acceleration;

	cout << "Enter the time (seconds): ";
	cin >> time;

	cout << endl;

	float traveled_distance = (speed * time) + ((acceleration * pow(time, 2)) / 2);

	cout << "Formula: S = (v * t) + ((a * t^2) / 2)" << endl;
	cout << "S = " << traveled_distance << " m" << endl;

	_getch();
	return 0;
}