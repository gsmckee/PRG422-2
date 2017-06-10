#ifndef STRING_H
#define STRING_H

#include "Vector.hpp"

#include <cstring>
#include <iostream>

class String: public Vector<char>
{
public: 
	String(const char* c_str)
		: Vector <char>() // Without this there is no memory allocation.
	{
		size_t sizeOfString = strlen(c_str);
		//std::cout << "Size of input = " << sizeOfString << std::endl;
		for ( size_t i = 0; i < sizeOfString; i++)
		{
			// Cout showing function being carried out in a proper loop
			//std::cout << "Adding Character " << c_str[ i ];
			AddElement(c_str[i]);
			//std::cout << " ...Done" << std::endl;
		}
		//std::cout << "Done Creating String" << std::endl;
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	//friend std::ostream& operator<<( std::ostream& o, const String& rhs )
	//{
	//	for( int i = 0; i < rhs.m_counter; i++ )
	//		o << rhs.m_buffer[ i ];

	//	return o;
	//}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	void Print( void )
	{
		for( int i = 0; i < m_counter; i++ )
			std::cout << m_buffer[ i ];
		std::cout << std::endl;
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	String()
		: Vector <char>()
	{
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	Vector<String> Split(const char* pattern)
	{
		Vector<String> res;
		int pat_count = 0;
		for( int i = 0; i <= m_counter; i++)
		{
			std::cout << m_buffer[i];
			if(m_buffer[i] == pattern[i])
			{
				std:: cout << std::endl;
				pat_count++;
				std::cout << pat_count << std::endl;
			}
		}
		return res;
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	int FindFirstOccurence(char letr)
	{
		//bool charPresent = false; 
		// Bool not necessary, because once the loop finds the char, the return exits the 
		// function. If it does not find the char it does not exit the function, but the loop to 
		// execute the next return of -1.
		for( int i =0; i <= m_counter; i++)
		{
			if(m_buffer[i] == letr )
			{
				std::cout << i << std::endl;
				std::cout << m_buffer[i] << std:: endl;
				//charPresent = true;
				return i;
			}
		}
		/*if(charPresent == false)
		{*/
			std::cout << "No letter matching the search was found" << std:: endl;
			return -1;
		//}
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	~String()
	{
		//delete [] m_buffer; Virtual destructor present in parent class 
		// making it uncessary to setup a destructor in the derived class.
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	static void Unit_Test_String(void)
	{
		String s1 ("Greg McKee");

		// Show element count and capacity, providing test to class being instantiated correctly.

		/*std::cout << "Num elements = " << s1.NumElements() << std::endl;
		std::cout << "Capacity = " << s1.Capacity() << std::endl;
		std::cout << "You should be able to see this" << std::endl;*/
		//std::cout << s1 << std::endl;
		//s1.Print();

		
		//std:: cout << "Test a known present char." << std::endl;
		s1.FindFirstOccurence('K');
		//std:: cout << "Test known char that is not present." << std::endl;
		s1.FindFirstOccurence('k');
		Vector<String> VofStrings = s1.Split(" ");
	}

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	static void Unit_Test_Split(void)
	{
		String s2 ("555.244.2444");
		Vector<String> VofStrings2 = s2.Split(".");
		String s3 ("127.0.0.1");
		Vector<String> VofStrings3 = s3.Split(".");

	}

};

#endif