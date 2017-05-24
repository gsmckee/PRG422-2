#include "A.h"
#include "Student.h"

#include <cstdio>
#include <cstring>
#include <array>
#include <stdlib.h>
#include <process.h>

// _CRT_SECURE_NO_WARNINGS
using namespace std;

int main(int argc, char* argv[])
{
	A a; // creating an object of type A
	a.AddNumber(1);
	a.AddNumber(3);
	a.AddNumber(2);
	a.Debug();
	printf("Hello world\r\n");
	char c;
	
	scanf("%c", &c);
	int stud;
	if(c == 'm' || c == 'M')
	{
		stud = 1;
	}
	else
	{
		stud = 0;
	}
	//////////////////////////////////////////////////////////
	int myArray[10];
	int size1 = sizeof(int);
	int size2 = sizeof(myArray);
	switch (stud)
	{
	case 0: 
		printf("The size of an int is = %i\r\n", size1);
		break;
	case 1:
		printf("The size of an int is = %i\r\n", size2);
		break;
	default:
		break;
	}
	Student s[10];
	for(int i = 0; i < 10; i++)
	{
		printf( "\r\n\r\nPrinting info for student %i / 10\r\n", i );
		Student();
		s[i].Debug();
	}

	system("pause");

	return 0;
}

//ExtendArrayInt(int **ptr, int old_cap, int new_cap) 
//Testing the function.
//{
//	int *temp= new int[old_cap]; 
//  Allocate temp
//	for(int i= 0; i< old_cap; i++) 
//  Backing up
//	{
//		temp[i]= *ptr;
//	}
//	delete[] *ptr; 
//  Clean mess
//	*ptr = new int[new_cap]; 
//  Starting from clean slate
//	for(int i = 0; i< old_cap; i++) 
//  Recovery
//	{
//		*ptr[i]= temp[i];
//	}
//}