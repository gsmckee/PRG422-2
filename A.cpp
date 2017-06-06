#include "A.h"
#include <iostream>

using namespace std;
// Side Note: The difference between Destructor/Constructor and regular methods is that 
// DTORS, and CTORS have no return type
A::A() // default constructor 
	{
		// new is a memory allocation operator

		array = new int[10];
		m_counter = 0;
	}
A::~A()
	{
		// memory deallocation operator

		delete [] array;
	}
// Because AddNumber is a regular method (AKA *NOT a DTOR or CTOR), it does have a return type.
void A::AddNumber(int n)
{
	if(m_counter >= 9)
		return;
	else
	{
		array[m_counter]= n;
		m_counter++;
	}
	/*static int counter = 0;
	if(counter >= 9)
		return;*/
}
void A::Debug(void)
{
	cout << "Number of elements = " << m_counter << endl;
	for(int i = 0; i < m_counter; i++)
	{
		cout << array[i] << " " << endl;
	}
}