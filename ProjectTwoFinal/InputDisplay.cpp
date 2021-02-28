#include <iostream>
#include <iomanip>
#include "InvestmentAmounts.h"
#include "GetInterestRateWithoutDeposit.h"
#include "GetInterestRateWithDeposit.h"

using namespace std;




void InputDisplay(){
	// instantiate copy of InvestmentAmounts class investAmounts
	InvestmentAmounts investAmounts;
    //Declare variables to get the input from the user
    float initialInvest, monthlyDep, annualInt;
    int years;
    //Declare variables to interact with class variables later
    float totalAmt, initialDeposit;

string d = "n";
do{
    //Get the validated data from the user
    cout << "********************************\n";
    cout << "********** Data Input **********\n";
    cout << "Initial Investment Amount: $";
    cin >> initialInvest;
    while(cin.fail()) {
        cout << "Error: Please enter the initial investment amount in the proper format, ie: 100.00"<<endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> initialInvest;
    }
    cout << "Monthly Deposit: $";
    cin >> monthlyDep;
    while(cin.fail()) {
        cout << "Error: Please enter the monthly deposit in the proper format, ie: 100.00"<<endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> monthlyDep;
    }
    cout << "Annual Interest: %";
    cin >> annualInt;
    while(cin.fail()) {
        cout << "Error: Please enter the monthly deposit in the proper format, ie: 5.0"<<endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> annualInt;
    }
    cout << "Number of years: ";
    cin >> years;
    while(cin.fail()) {
        cout << "Error: Please enter the years in the proper format, ie: 5"<<endl;
        cin.clear();
        cin.ignore(256,'\n');
        cin >> years;
    }
    cout<<"Press any key to continue..."<<endl;
    cin>>d;



    // set the data from the user using the appropriate class function
    investAmounts.SetInitialInvestment(initialInvest);

    investAmounts.SetInitialDeposit(initialInvest);


// this loop will break as soon as the user enters a character
    break;

}while(d =="n");



// Set totalAmt to the initial investment amount for calculating the table
totalAmt = investAmounts.GetInitialInvestment();

initialDeposit = investAmounts.GetInitialDeposit();





    //pass the data required to the GetInterestRateWithoutDeposit class to create the first report

    GetInterestRateWithoutDeposit(totalAmt, annualInt, initialDeposit,years);


    // Starting the second table, 'with additional monthly deposits'
    // Total amount should start out as the initial amount to calculate for the second table
    totalAmt = investAmounts.GetInitialInvestment();



    // Pass the data to the GetInterestRateWithDeposit class to create the second table
    GetInterestRateWithDeposit(totalAmt, annualInt, initialDeposit, monthlyDep, years);


       // Give the user the option to repeat the form or exit
       char c = 'v';
       do{
    	   cout << "To repeat the Input Form entry, press y. Else, press any key to exit."<<endl;
    	   cin>>c;
    	   if(c == 'y')InputDisplay();
    	   else
    	   cout<< "Program has ended. Thank you."<<endl;
    	   exit(0);
       }while(c == 'v');


}// end class
