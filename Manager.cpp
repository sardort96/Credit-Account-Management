// Ravshan Makhmadaliev
// Sardor Taylakov 
// Rakhimjon Rustamov

// presentatin day December 15, 2016

// CREDIT ACCOUNT MANAGEMENT APP 


#include"Manager.h"

void Manager::registerAccount()
{

	string lines[5];
	ifstream infile;
	infile.open("names.txt");
	while (!infile.eof())
	{
		for (int k = 0; k < 5; k++)
		{
			infile >> lines[k];
		}
		Account *newOne = new Account();
		newOne->setName(lines[0]);
		newOne->setPassportNumber(atoi(lines[2].c_str()));
		newOne->setCreditAmount(atoi(lines[3].c_str()));
		newOne->setSurename(lines[1]);
		newOne->setCreditPercentage(atoi(lines[4].c_str()));
		ht.hashFunction2(newOne);
	}
	infile.close();

}

void Manager::retreiveInfo()
{
	cout << "Enter client's first name: ";
	string n;
	cin >> n;
	cout << "Passport series: ";
	long i;
	cin >> i;
	ht.retrieve(n,i);

}