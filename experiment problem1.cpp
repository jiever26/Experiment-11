#include <iostream>
	#include <conio.h>
	using namespace std;
	

	int main()
	{
		double BOXPrice, SIDELINEPrice, PREMIUMPrice, GENADPrice, Box, Sideline, Premium, GenAd, totalbox, totalsideline, totalpremium,
			totalGenAd;
	

		cout << "Box ticket price: \n";
		cin >> BOXPrice;
		cout << "Sideline ticket price: \n";
		cin >> SIDELINEPrice;
		cout << "Premium ticket price: \n";
		cin >> PREMIUMPrice;
		cout << "General Admission Price: \n";
		cin >> GENADPrice;
		cout << "Box tickets sold: \n";
		cin >> Box;
		cout << "Sideline ticket/s sold: \n";
		cin >> Sideline;
		cout << "Premium tickets sold: \n";
		cin >> Premium;
		cout << "General Admission ticket/s sold: \n";
		cin >> GenAd;
	
		totalbox = BOXPrice * Box;
		totalsideline = SIDELINEPrice * Sideline;
		totalpremium = PREMIUMPrice * Premium;
		totalGenAd = GenAd * GENADPrice;
	
		cout << "Box Tickets Sold:" << Box << endl;
		cout << "Total Box Ticket Sale:" << totalbox << endl;
		cout << "Sideline Tickets Sold:" << Sideline << endl;
		cout << "Total Sideline Ticket Sale:" << totalsideline << endl;
		cout << "Premium Tickets Sold:" << Premium << endl;
		cout << "Total Premium Ticket Sale:" << totalpremium << endl;
		cout << "General Admission Tickets Sold:" << GenAd << endl;
		cout << "Total General Admission Ticket Sale:" << totalGenAd << endl;
	

		-getch();
		return 0;
	}













