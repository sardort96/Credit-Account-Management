// Ravshan Makhmadaliev
// Sardor Taylakov 
// Rakhimjon Rustamov

// presentatin day December 15, 2016

// CREDIT ACCOUNT MANAGEMENT APP 


#ifndef HASHTABLE_H
#define HASHTABLE_H
#include"Account.h"
#include"Vector.h"

class HashTable{
private:
	Vector vector;
public:
	int hashFunction1(long i);
	void hashFunction2(Account* node);
	void retrieve(string fn, long n);
	Vector* getVector(){ return &vector; }
	void rehashFunction();
};



#endif