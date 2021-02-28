#ifndef INVESTMENT_AMOUNTS_H
#define INVESTMENT_AMOUNTS_H

#include <string>
using namespace std;

/* Class InvestmentAmounts holds initial values retrieved from the user and declares
 * the initial getter and setter functions that will be used for each variable */

class InvestmentAmounts {
      public:
      InvestmentAmounts();
      void SetInitialInvestment(float t_initialInvest);

      void SetInitialDeposit(float t_initialDeposit);


      float GetInitialInvestment() const;

      float GetInitialDeposit() const;


      private:
      float m_initialInvestment;

      float m_initialDeposit;

};
#endif

