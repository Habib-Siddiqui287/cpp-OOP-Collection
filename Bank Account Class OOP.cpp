#include<iostream>
using namespace std;
class Bank
{
	private:
	string name;
	int AccNo;
	string  type;
	float balance;
	public:
		Bank(string n,int a,string t,float b)
		{
			name=n;
			AccNo=a;
			type=t;
			balance=b;
		}
		void deposit(float amount)
		{
			balance=balance+amount;
		}
		void withdrawl(float amount)
		{
			if(amount<=balance)
			{
				balance=balance-amount;
			}
			else
			{
				cout<<"insufficient Balance"<<endl;
			}
		}
		void display()
		{
			cout<<"Dear "<<name<<" Your Balance is: "<<balance<<endl;
		}
};
int main()
{
	Bank bank("Habib",34521,"Current",10000);
	bank.deposit(500);
	bank.withdrawl(700);
	bank.display();
	return 0;
}
