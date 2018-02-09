// Ravshan Makhmadaliev
// Sardor Taylakov 
// Rakhimjon Rustamov

// presentatin day December 15, 2016

// CREDIT ACCOUNT MANAGEMENT APP 


#include"HashTable.h"

int HashTable::hashFunction1(long key)
{

	int index = (3 * key + 5) % vector.capacity;
	return index;
}

void HashTable::hashFunction2(Account* node)
{
	int index = 0;
	long key = node->getPassportNumber();
	for (int j = 0; j < (vector.capacity - 1); j++)
	{
		index = (hashFunction1(key) + j*((7 - (key % 7)))) % vector.capacity;
		if (vector[index].getPassportNumber() != 0)
		{
			continue;

		}
		else
		{
			vector.insert(index,*node);
			float loadFactor = (float(vector.n) /(float) vector.capacity);
			if (loadFactor > 0.5)
			{

				vector.reserve(vector.findNextPrime(vector.capacity * 2));
				rehashFunction();
				
			}
			break;
		}
	}

}


void HashTable::rehashFunction()
{
	int currentCapacity=vector.capacity;
	Vector tempvec = Vector(currentCapacity);
	int index = 0;
	for (int r = 0; r < currentCapacity; r++)
	{
		
		long pn = vector[r].getPassportNumber();
		if (pn == 0)
		{
			continue;
		}
		else
		{
			for (int j = 0; j < currentCapacity - 1; j++)
			{
				index = (hashFunction1(pn) + j*(7 - (pn % 7))) % currentCapacity;
				if (tempvec[index].getName() != "")
				{
					continue;
				}
				else
				{
					tempvec.insert(index, vector[r]);
					break;
				}

			}
		}
	}
	vector = tempvec;

}

void HashTable::retrieve(string fn, long n)
{
	int index = 0;
	long key = n;
	for (int j = 0; j < vector.capacity - 1; j++)
	{
		index = (hashFunction1(key) + j*((7 - (key % 7)))) % vector.capacity;
		if (vector[index].getName() == "" || vector[index].getName() != fn)
		{
			continue;
		}
		else if (vector[index].getName() == fn && vector[index].getPassportNumber()==key)
		{
			vector[index].printInfo();
			break;
		}
	}

}
