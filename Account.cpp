#include"Account.h"

string Account::getName(){ return name; }
string Account::getSurename(){ return surename; }
long Account::getPassportNumber(){ return passportNumber; }
int Account::getCreditAmount(){ return creditAmount; }
int Account::getCreditPercentage(){ return creditPercentage; }

void Account::setName(string s){ name = s; }
void Account::setSurename(string s){ surename = s; }
void Account::setPassportNumber(long n){ passportNumber = n; }
void Account::setCreditAmount(int n){ creditAmount = n; }
void Account::setCreditPercentage(int n){ creditPercentage = n; }
void Account::printInfo()
{
	system("cls");
	cout << "\nFULL INFO\n\n";
	cout << "Name: "<<getName()<<endl;
	cout << "Family name: " << getSurename() << endl;
	cout << "Passport series: " << getPassportNumber() << endl;
	cout << "Credit amount: " << getCreditAmount() << endl;
	cout << "Credit percentage: " << getCreditPercentage() << endl;
}






