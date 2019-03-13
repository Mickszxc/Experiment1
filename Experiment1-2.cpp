#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	cout << fixed << showpoint;
	double density;
	double mass;
	setprecision (2);

	cout << setprecision (2) << "Enter the value of Mass in Grams: " ;
	cin >> mass;
	cout << setprecision (2) << "Enter the value of Density: ";
	cin >> density;
	cout << "The value of Mass is " << mass << "and the value of Density is " << density << endl;
	cout << "The formula to find the Volume is Mass/4(Density)" << endl;
	cout << setprecision (2) << "The Volume is " << mass / ( 4 * density ) << "cm^3" << endl;

	_getch();
	return 0;
} 
