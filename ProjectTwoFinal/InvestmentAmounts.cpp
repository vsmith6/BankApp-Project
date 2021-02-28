#include <iostream>
using namespace std;
#include <iomanip>
#include "InvestmentAmounts.h"


/* Investment Amounts setter and getter functions to get and save the data
 * entered by the user. Class could be expanded to contain additional terms if the program
 * gets larger or additional functionality is required*/

// create constructor and assign initial values to 0
InvestmentAmounts::InvestmentAmounts() {
   m_initialInvestment = 0;

   m_initialDeposit = 0;


}

// setters

void InvestmentAmounts::SetInitialInvestment(float t_initialInvest){
	m_initialInvestment = t_initialInvest;
}



void InvestmentAmounts::SetInitialDeposit(float t_initialDeposit){
	m_initialDeposit = t_initialDeposit;
}

// getters
float InvestmentAmounts::GetInitialInvestment() const{
	return m_initialInvestment;
}


float InvestmentAmounts::GetInitialDeposit() const{
	return m_initialDeposit;
}




