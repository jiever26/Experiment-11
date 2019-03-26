#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
	

	int main()
	{
	
		double AverageDAILYBal, NetBalance, Payment, D1, D2, Interest;
	
		const double Interest_Constant = 0.0152;
	
		cout << setprecision(2) << fixed << showpoint;
	

		cout << "Balance in the bill: \n";
		cin >> NetBalance;
		cout << "Payment made: \n";
		cin >> Payment;
		cout << "The Number of days in the billing cycle: \n";
		cin >> D1;
		cout << "The Number of days payment is done before the billing cycle: \n";
		cin >> D2;
	
		AverageDAILYBal = (NetBalance * D1 - Payment * D2)/D1;
		Interest = (AverageDAILYBal * Interest_Constant);
	
		cout << "Computed Interest:" << Interest << endl;
	

		-getch();
		return 0;
	

	}

