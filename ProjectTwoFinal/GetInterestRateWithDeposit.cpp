#include <iostream>
#include <iomanip>
using namespace std;

/* function takes parameters as a reference as requirement and calculates the totals and interest earned with an additional
monthly deposit amount*/
void GetInterestRateWithDeposit(float& totalAmt, float& annualInt, float& initialDeposit,float& monthlyDeposit, int years){
    //Display year data with monthly deposits
    cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
    cout << "================================================================\n";
    cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
    cout << "----------------------------------------------------------------\n";

    // loop through and display the information by years given by user
    for (int i = 0; i < years; i++) {

        // Set the yearly amount with interest to zero at the start of the year
       float yearTotal = 0;

        // loop through and display the amount of the calculations to the user per each year
        for (int j = 0; j < 12; j++) {

            // calculate the initial amount plus the additional deposits and determine the interest
          	initialDeposit = (totalAmt + monthlyDeposit) * ((annualInt/ 100)/12);


            // Calculate month end interest per month
            yearTotal = yearTotal + initialDeposit;


            // Calculate monthly total saved with interest

            totalAmt = totalAmt + monthlyDeposit + initialDeposit;


        }

        // Show the formatted results to the user by year
        cout << (i + 1) << "\t\t$" << fixed << setprecision(2)<<setw(10)<<left<< totalAmt << "\t\t\t$"<<left<<yearTotal << "\n";
        cout<< endl;
        cout<< endl;
    }

}
