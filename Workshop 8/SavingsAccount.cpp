/*
*****************************************************************************
						  Workshop - #8 (P1)
Full Name  : Pratham Hemangbhai Pathak
Student ID#: 161688213
Email      : ppathak5@myseneca.ca
Section    : NBB

Authenticity Declaration:
I declare this submission is the result of my own work and has not been
shared with any other student or 3rd party content provider. This submitted
piece of work is entirely of my own creation.
*****************************************************************************
*/
#include "SavingsAccount.h"
namespace sdds 
{
	SavingsAccount::SavingsAccount(double amt, double i) :Account(amt) 
	{
		if (i > 0)
		{
			this->Interest = i;
		}
		else
		{
			this->Interest = 0;
		}
	}
    void SavingsAccount::monthEnd()
	{
		credit(Interest * balance());
	}
    void SavingsAccount::display(std::ostream& os) const 
	{
		os << "Account type: Savings" << std::endl << "Balance: $" << std::fixed << std::setprecision(2) << balance() << std::endl << "Interest Rate (%): " << std::fixed << std::setprecision(2) << this->Interest * 100 << std::endl;
	}

}