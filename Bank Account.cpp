#include<iostream>
using namespace std;
class Bank_Account
{
	public:
		string Account_Holder_Name;
		int Balance,deposit,withdrawl,option;
		void input()
		{
			cout<<"Enter Account Holder Name: ";
			cin>>Account_Holder_Name;
			cout<<"Your Initial Balance: ";
			cin>>Balance;
		}
		void output()
		{
          cout<<"What you Want:"<<endl<<"1.Deposit"<<endl<<"2.withdrawl"<<endl;
          cin>>option;
          if(option==1)
          {
          	int current_balance;
          	cout<<"How much amount you want to deposit: ";
          	cin>>deposit;
          	current_balance = deposit+Balance;
          	cout<<"Dear "<<Account_Holder_Name<<" After Deposit Your Current Balance is "<<current_balance;
		  }
		  if(option==2){
		  	cout<<"How much amount you want to withdrawl : ";
		  	cin>>withdrawl;
		  	int current_balance1 = Balance-withdrawl;
          	cout<<"Dear "<<Account_Holder_Name<<" After withdrawl Your Current Balance is "<<current_balance1;
		  }
	}
};
int main()
{
    Bank_Account account;
	account.input();
	account.output();
	return 0;
}
