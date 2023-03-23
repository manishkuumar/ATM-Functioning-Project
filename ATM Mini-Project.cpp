// This project is based on the ATM functionalities.
// Users can check account balance , Cash Withdrawl and User Details.
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
class Bank {
private:
	string name;
	int accnumber;
	char type[10];
	int amount = 0;
	int tot_bal = 0;
public:
	void setval()
	{
		cout << "Enter name\n";
		cin.ignore();
		getline(cin, name);


		cout << "Enter Account number\n";
		cin >> accnumber;
		cout << "Enter Account type\n";
		cin >> type;
		cout << "Enter Balance\n";
		cin >> tot_bal;
	}
	void showdata()
	{
		cout << "Name:" << name << endl;
		cout << "Account No:" << accnumber << endl;
		cout << "Account type:" << type << endl;
		cout << "Balance:" << tot_bal << endl;
	}
	void deposit()
	{
		cout << "\nEnter amount to be Deposited\n";
		cin >> amount;
	}
	void viewbal()
	{
	    tot_bal = tot_bal + amount;
		cout << "\nTotal balance is: " << tot_bal;
	}
	void withdrawl()
	{
		int a, avail_balance;
		cout << "Enter amount to withdraw\n";
		cin >> a;
		avail_balance = tot_bal - a;
		cout << "Available Balance is" << avail_balance;
	}
};
int main()
{
	Bank b;
	int choice;
	while (1) {
		cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~WELCOME~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~~~~~~~~~~~~~~~~~~~~"
			<< "~~~~~~~~~\n\n";
		cout << "Enter Your Choice\n";
		cout << "\t1. Enter name, Account "
			<< "number, Account type\n";
		cout << "\t2. Balance Enquiry\n";
		cout << "\t3. Deposit Money\n";
		cout << "\t4. Show Total balance\n";
		cout << "\t5. Withdraw Money\n";
		cout << "\t6. Cancel\n";
		cin >> choice;
		switch (choice) {
		case 1:
			b.setval();
			break;
		case 2:
			b.showdata();
			break;
		case 3:
			b.deposit();
			break;
		case 4:
			b.viewbal();
			break;
		case 5:
			b.withdrawl();
			break;
		case 6:
			exit(1);
			break;
		default:
			cout << "\nInvalid choice\n";
		}
	}
}