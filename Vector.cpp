// Ravshan Makhmadaliev
// Sardor Taylakov 
// Rakhimjon Rustamov

// presentatin day December 15, 2016

// CREDIT ACCOUNT MANAGEMENT APP 

#include"Vector.h"


Vector::Vector()
: capacity(23), n(0), A(new Account[capacity])
{
}
Vector::Vector(int o)
: capacity(o), n(0), A(new Account[capacity])
{
}

int Vector::size() const
{
	return n;
}

bool Vector::empty() const
{
	return size() == 0;
}

Account& Vector::operator[](int i)
{
	return A[i];
}


Vector& Vector::operator=(Vector &newOne)
{
	for (int i = 0; i < newOne.capacity;i++)
	{
		A[i] = newOne[i];
	}
	return *this;
}

void Vector::erase(int i)
{
	for (int j = i + 1; j < n; j++)
		A[j - 1] = A[j];
	n--;
}

void Vector::reserve(int N){
	Account *B = new Account[N];
	for (int j = 0; j < capacity; j++)
	{
		B[j] = A[j];
	}if (A != NULL)
		delete[] A;
	A = B;
	capacity = N;
	
}

void Vector::insert(int i, const Account node)
{
	if (n >= capacity)
		reserve(max(1, 2 * capacity));
	for (int j = n - 1; j >= i; j--)
		A[j + 1] = A[j];
	A[i] = node;
	n++;
}
int Vector::findNextPrime(int n)
{
	int nextPrime = n;
	bool found = false;

	
	while (!found)
	{
		nextPrime++;
		if (isPrime(nextPrime))
			found = true;
	}

	return nextPrime;
}


bool Vector::isPrime(int n)
{
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)     
			return false;
	}

	return true;
}

