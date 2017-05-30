/* file : Assignment01.cpp */

#include "Assignment.hpp"

#include <iostream>

using namespace std;

/**
 * problem statement:
 * Given an initial capacity of 10 elements, and an initial counter of 0,
 * add 10 to the capacity variable everytime the counter variable shows it has
 * reached the capacity.
 * Example:
 * scenario 1 - counter = 0 - capacity = 10
 * scenario 2 - counter = 5 - capacity = 10
 * scenario 3 - counter = 9 - capacity = capacity + 10
 * scenario 4 - counter = 14 - capacity = 20
 * scenario 5 - counter = 17 - capacity = 20
 * scenario 6 - counter = 19 - capacity = capacity + 10

 * Notes: everytime the capacity is updated, show it with std::cout, in a message.
 * (cout << "Re - allocation" << endl;)

 * Test: write a for loop which increments the counter variable 30 times.
 */
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void assignment01( void )
{
	
	int capacity = 10;
	int grades[];
	int counter = 0;

	// Write your code below:
	if(counter < capacity)
	{
		for( int i = 0; i< sizeof(capacity); i++)
		{
			grades[i]= i;
			counter++;
			cout << grades[i] << endl;
		}
	}
	else if (counter >= capacity)
	{
		capacity = capacity + 10;

	}
	
	

	return;

}
