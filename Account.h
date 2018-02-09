// Ravshan Makhmadaliev
// Sardor Taylakov 
// Rakhimjon Rustamov

// presentatin day December 15, 2016

// CREDIT ACCOUNT MANAGEMENT APP 

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include<string>
#include<iostream>
using namespace std;
class Account
{
private:
	string name, surename;
	long passportNumber = 0;
	int creditAmount = 0, creditPercentage = 0;
public:
	string getName();
	string getSurename();
	long getPassportNumber();
	int getCreditAmount(); 
	int getCreditPercentage();
	
	void setName(string s);
	void setSurename(string s);
	void setPassportNumber(long n);
	void setCreditAmount(int n);
	void setCreditPercentage(int n);
	void printInfo();
};

#endif