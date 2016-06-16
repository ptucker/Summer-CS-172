#include <iostream>
#include <vector>
#include "Account.h"
#include "Transaction.h"
#include "Date.h"
using namespace std;

int main()
{
	Account A("George", 1122, 1000, 1.5);
	Date D(4433666), D1(482993220), D2(2119831890);
	Transaction t1('D', 20, 1020, "Allowance money", D);
	Transaction t2('D', 10, 1030, "Found some money", D1);
	Transaction t3('D', 200, 1230, "Won a raffle", D1);
	Transaction t4('W', 10, 1220, "Fast food", D2);
	Transaction t5('W', 60, 1160, "Gas", D2);
	Transaction t6('W', 345, 815, "Rent", D2);

	A.deposit(t1);
	A.deposit(t2);
	A.deposit(t3);
	A.withdraw(t4);
	A.withdraw(t5);
	A.withdraw(t6);

	cout << "Name: " << A.getName() << endl;
	cout << A.getName() << "'s interest rate: " << A.getannualInterestRate() << endl;
	cout << A.getName() << "'s balance: " << A.getBalance() << endl << endl;
	cout << A.getName() << "'s transactions: " << endl;
	for (int i = 0; i < 6; i++) {
		cout << A.transactions[i].getType() << " " 
			 << A.transactions[i].getDescription() << " " 
			 << A.transactions[i].getAmount() <<   endl;
	}
}