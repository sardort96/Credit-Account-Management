// Ravshan Makhmadaliev
// Sardor Taylakov 
// Rakhimjon Rustamov

// presentatin day December 15, 2016

// CREDIT ACCOUNT MANAGEMENT APP 


#include"Manager.h"
#include<cmath>
using std::sqrt;
Manager manager;


void main()
{


	manager.registerAccount();
	
	char ch;
	do{
		manager.retreiveInfo();		
		cout << "\nPress Q to quit Y to search another: ";
		cin >> ch;
		system("cls"); 
	} while (ch != 'Q'|| ch=='Y');
	cout << "good bye....\n";
}


