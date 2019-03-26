#include <iostream>
#include <conio.h>
using namespace std;
	

	int main()
	{
		double MASS, DENSITY;
		cout << "Enter mass:" <<endl;
		cin >> MASS;
		cout << "Mass = " << MASS << "g" <<endl;
		cout << "Enter density: " << endl;
		cin>> DENSITY;
		cout << "Density =" << DENSITY << "g/cm^3" << endl;
		cout << "Volume of the Object = " << MASS/(4*DENSITY) << "cm^3" << endl;
		-getch();
		return 0;
	}

