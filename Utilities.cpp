#include "Utilities.h"

#include <iostream>

using namespace std;

//int old_cap= 10;
//int new_cap= old_cap + 10;

void ExtendArrayInt(int** ptr, int old_cap, int new_c) 
//Testing the function.
{
	//int new_c= old_cap + 10;
	int* temp= new int[old_cap]; 
//  Allocate temp
	for(int i= 0; i< old_cap; i++) 
//  Backing up
	{
		temp[i] = (*ptr)[i];
		//cout << temp[i] << endl;
	}
	delete[] *ptr; 
//  Clean mess
	*ptr = new int[new_c]; 
//  Starting from clean slate
	for(int i = 0; i< old_cap; i++) 
//  Recovery

	{
		(*ptr)[i]= temp[i];
		//cout << ptr[i] << endl;
	}
	delete [] temp;
}
//ExtendArrayInt(int **ptr, int old_cap, int new_cap) 
////Testing the function.
//{
//	int *temp= new int[old_cap]; 
////  Allocate temp
//	for(int i= 0; i< old_cap; i++) 
////  Backing up
//	{
//		temp[i]= *ptr;
//	}
//	delete[] *ptr; 
////  Clean mess
//	*ptr = new int[new_cap]; 
////  Starting from clean slate
//	for(int i = 0; i< old_cap; i++) 
////  Recovery
//	{
//		*ptr[i]= temp[i];
//	}
//}