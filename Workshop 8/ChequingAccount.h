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
#ifndef ChequingAccount_H
#define ChequingAccount_H
namespace sdds 
{
	class ChequingAccount :public Account
	{
		double Transaction_Fee;
		double Monthly_Fee;
	public:
		ChequingAccount(double, double, double);
		bool credit(double);
		bool debit(double);
		void monthEnd();
		void display(std::ostream&) const;

	};


}
#endif