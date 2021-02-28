#include <iostream>
#include <iomanip>
#include "InputDisplay.h"

using namespace std;

/* This class displays the initial form to the user. The form will remain on the screen until a user
 * chooses a character */
void InitialDisplay(){
	string c = "n";
	do{
//Display form to user
    cout << "********************************\n";
    cout << "********** Data Input **********\n";
    cout << "Initial Investment Amount:    \n";

    cout << "Monthly Deposit: \n";
    cout << "Annual Interest: \n";
    cout << "Number of years: \n";
    cout << endl;

    cout << "Press any key to continue ..."<< endl;

    getline(cin,c);
    // Once the user enters a character, the initial display will stop and the Input Display will be called.
    InputDisplay();
    break;

} while(c == "n");
 }
