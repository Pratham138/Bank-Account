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
#include "ChequingAccount.h"
namespace sdds 
{
	ChequingAccount::ChequingAccount(double amount, double transaction, double monthly) :Account(amount) 
	{
		if (transaction > 0)
		{
			Transaction_Fee = transaction;
		}
		else
		{
			Transaction_Fee = 0;
		}
		if (monthly > 0)
		{
			Monthly_Fee = monthly;
		}
		else
		{
			Monthly_Fee = 0;
		}
	}

    bool ChequingAccount::credit(double amount) 
	{
		bool transaction = Account::credit(amount);
		if (transaction)
		{
			this->Account::debit(Transaction_Fee);
		}
		return transaction;
	}

	bool ChequingAccount::debit(double amount) 
	{
		bool transaction = Account::debit(amount);
		if (transaction)
		{
			this->Account::debit(Transaction_Fee);
		}
		return transaction;
	}

	void ChequingAccount::monthEnd() 
	{
		Account::debit(Monthly_Fee);
	}

	void ChequingAccount::display(std::ostream& os) const 
	{
		os << "Account type: Chequing" << std::endl << "Balance: $" << std::fixed << std::setprecision(2) << balance() << std::endl << "Per Transaction Fee: " << std::fixed << std::setprecision(2) << this->Transaction_Fee << "\nMonthly Fee: " << std::fixed << std::setprecision(2) << this->Monthly_Fee << std::endl;

	}

}