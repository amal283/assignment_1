#include <iostream>
#include <string>
using namespace std;
class BankAccount{

public:
	BankAccount (){
		name = "ahmad";
		account_number = "10";
		balance = 1000;
	}
	void getName (){
		cout << "name:" << name << endl;
	}
	void getAccountNumber (){
		cout << "account number:" << account_number << endl;
	}
	void getBalance (){
		cout << "balance:" << balance << endl;
	}
	void deposit (double x){
		balance = balance+x;
	}
	void withdraw (double y){
		if (y>balance)
			cout << "error" << endl;
		else
			balance = balance-y;
	}

private:
	string name;
	string account_number;
	double balance;
};

void main (){
	BankAccount b;
	b.getName ();
	b.getAccountNumber ();
	b.getBalance ();
	while (true){
	cout << "if you want to deposit money click D and if you want to withdraw money click W" << endl;
	char input;
	cin >> input;
	cout << "enter the amount of money" << endl;
	double amountOfMoney;
	cin >> amountOfMoney;
	if (input == 'D'){
		b.deposit (amountOfMoney);
		cout << "your new balance is:";
		b.getBalance ();
	}
	else if (input == 'W'){
		b.withdraw (amountOfMoney);
		cout << "your new balance is:";
		b.getBalance ();
	}
	else
		cout << "error" << endl;
}
}
