#ifndef VECTOR_HPP
#define VECTOR_HPP

//#define VERBOSE

#include <iostream>
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
#define	VECTOR_DEFAULT_CAPACITY 64

typedef unsigned long int count_t;
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
template <typename V> class Vector
{
protected:
	V* m_buffer;
	count_t m_counter;
	count_t m_capacity;

public:
	Vector(void)
	{
		m_capacity = VECTOR_DEFAULT_CAPACITY;
		m_counter = 0;
		m_buffer = new V[m_capacity];
	}

	virtual ~Vector(void)
	{
		// Shows that Destructor is called.
		//std::cout << "Vector - About to delete" << std::endl;
		delete [] m_buffer;
		// Shows that Destructor completed action.
		//std::cout << "Vector - Done deleting" << std::endl; 
	}


	// Function to show number of elements.
	/*count_t Capacity() { return m_capacity; } 
	count_t NumElements() { return m_counter; }*/

	void AddElement(V element)
	{
#ifdef VERBOSE
		//std::cout << "AddElement Called" << std::endl;
#endif

		m_buffer[m_counter] = element;
		m_counter++;
	}
};
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////

#endif