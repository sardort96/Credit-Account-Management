// Ravshan Makhmadaliev
// Sardor Taylakov 
// Rakhimjon Rustamov

// presentatin day December 15, 2016

// CREDIT ACCOUNT MANAGEMENT APP 


#ifndef VECTOR_H
#define VECTOR_H
#include"Account.h"
#include<stdexcept>
#include<algorithm>

using namespace std;


class Vector{
	friend class HashTable;		// to access capacity
public:
	Vector();
	Vector(int);				//constructor
	int size() const;		//return the number of elements
	bool empty() const;		//check if it is empty
	Account& operator[](int i);
	Vector& operator=(Vector &);
	void erase(int i);		//remove an element at index i
	void insert(int i, const Account node);	//insert an element at index i
	void reserve(int N);	//reserve at least N spots
	int getCapacity(){ return capacity; }
	bool isPrime(int );
	int findNextPrime(int );
private:
	int capacity;		//current array size
	int n;				//number of elements in vector
	Account *A;			//array storing the node accounts


};




#endif