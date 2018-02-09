// Ravshan Makhmadaliev
// Sardor Taylakov 
// Rakhimjon Rustamov

// presentatin day December 15, 2016

// CREDIT ACCOUNT MANAGEMENT APP 


#ifndef MANAGER_H
#define MANAGER_H
#include"Hashtable.h"
#include <fstream>
class Manager{
public:
	void registerAccount();
	void retreiveInfo();
	HashTable* getHashTable(){ return &ht;}
private:
	HashTable ht;
};

#endif