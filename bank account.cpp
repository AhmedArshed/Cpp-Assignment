#include<iostream>
#include<string.h>
using namespace std;

class bank_account
{
	private:
		int account_no;
		double double balance;
		int deposit;
		int withdraw;
	public:
		bank_account
		{
			account_no =0;
			balance = 00;
		}
void set_account
{
	cout << "Enter a account no";
	cin >> account_no;
	cout << "Enter a balance";
	cin >> balance;
}
void get_account
{
	cout << account_no;
	cout << balance;	
}
void deposit_money
{
	cout << "Enter deposit money";
	cin >> deposit;
	couwithdraw_moneyt << balance + deposit;
}
void withdraw_money
{
	cout << "Enter withdraw money";
	cin >> withdraw;
	cout << balance - withdraw;
}

};
class cheaking_account : public bank_account
{
	private:
		
};
int main()
{
	bank_account b1;
	b1.set_account;
	b1.get_account;
	b1.deposit_money;
	b1.withdraw_money;
}
