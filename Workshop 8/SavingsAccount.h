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
#ifndef SavingsAccount_H
#define SavingsAccount_H
#include "Account.h"
namespace sdds 
{
	class SavingsAccount : public Account
	{
		double Interest;
	public:
		SavingsAccount(double, double);
		void monthEnd();
		void display(std::ostream&) const;
	};


}

#endif
