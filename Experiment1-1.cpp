#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main ()
{
	cout << fixed << showpoint;
	double TPrice1;
	double TPrice2;
	double TPrice3;
	double TPrice4;
	double TSold1;
	double TSold2;
	double TSold3;
	double TSold4;
	setprecision (2);


	cout << "Box Ticket Price: ";
	cin >> TPrice1;
	cout << "Number of Tickets Sold: ";
	cin >> TSold1;
	cout << "\n";

	cout << "Sideline Ticket Price: ";
	cin >> TPrice2;
	cout << "Number of Tickets Sold: ";
	cin >> TSold2;
	cout << "\n";

	cout << "Premium Ticket Price: ";
	cin >> TPrice3;
	cout << "Number of Tickets Sold: ";
	cin >> TSold3;
	cout << "\n";

	cout << "General Admission Ticket Price: ";
	cin >> TPrice4;
	cout << "Number of Tickets Sold: ";
	cin >> TSold4;
	cout << "\n";

	cout << "Ticket Price" << "\t" << "Number of Tickets Sold" << "\t" << "Total Sale Amount" << "\n" << endl; 
	cout << setprecision(2) << TPrice1 << "\t                "  << TSold1<< "\t            "  << TPrice1 * TSold1 << "\n" <<endl;
	cout << TPrice2 << "\t                " << TSold2<< "\t    " << TPrice2 * TSold2 << "\n" <<endl;
	cout << TPrice3 << "\t                " << TSold3 << "\t    " << TPrice3 * TSold3 << "\n" <<endl;
	cout << TPrice4 << "\t                " << TSold4  << "\t    " << TPrice4 * TSold4 << "\n" <<endl;



	_getch();
	return 0;
} 
