#ifndef UTILITIES_HPP
#define UTILITIES_HPP

#include <iostream>

void ExtendArrayInt(int** ptr, int old_cap, int new_cap);


// templates need to be defined inside the .hpp file and not
// the .cpp file.
template <typename T> void ExtendArrayInt(T** ptr, int old_cap, int new_cap)
{
	int* T= new T[old_cap]; 
//  Allocate temp
	for(int i= 0; i< old_cap; i++) 
//  Backing up
	{
		temp[i] = (*ptr)[i];
	}
	delete[] *ptr; 
//  Clean mess
	*ptr = new int[new_cap]; 
//  Starting from clean slate
	for(int i = 0; i< new_cap; i++) 
//  Recovery
	{
		*ptr[i]= temp[i];
	}
}
#endif

