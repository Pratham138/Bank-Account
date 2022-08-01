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
#include "Account.h"
namespace sdds 
{

	Account::Account(double Amount) 
	{
		if (Amount > 0)
		{
			Current_Balance = Amount;
		}
		else
		{
			Current_Balance = 0;

		}
	}

    bool Account::credit(double Amount) 
	{
		bool check = Amount > 0;
		if (check)
		{
			Current_Balance += Amount;
		}
		return check;
	}

	bool Account::debit(double Amount) 
	{
		bool check = Amount > 0;
		if (check)
		{
			Current_Balance -= Amount;
		}
		return check;
	}

	double Account::balance() const 
	{
		return Current_Balance;
	}
}
