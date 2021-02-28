
#include <iostream>
#include <iomanip>
using namespace std;

// This function takes parameters passed by reference and calculates the total amount and based on no additional monthly deposits.
void GetInterestRateWithoutDeposit(float& totalAmt, float& annualInt, float& initialDeposit, int years){
	  // Starting the first table 'without additional monthly deposits'
	  cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
	  cout << "================================================================\n";
	  cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	  cout << "----------------------------------------------------------------\n";
// for each year given by user, calculate the amount of interest earned with no additional monthly deposits.
	for(int i = 0; i < years; ++i){
		 // calculate the amount of interest made
		 initialDeposit = (totalAmt * (annualInt / 100));
         // add the amount to the total
		 totalAmt = totalAmt + initialDeposit;
		 // Show the formatted results to the user by year
		 cout<<(i +1)<< "\t\t$" << fixed << setprecision(2)<< totalAmt << "\t\t\t$"<< initialDeposit << "\n";
         cout<<endl;

}

}


