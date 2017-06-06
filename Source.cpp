#include "A.h"
#include "Student.h"
#include "Assignment.hpp"

#include <cstdio>
#include <cstring>
#include <string>
#include <array>
#include <cstdlib>
#include <process.h>

// _CRT_SECURE_NO_WARNINGS
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
void Legacy( void )
{
	A a; // creating an object of type A
	a.AddNumber(1);
	a.AddNumber(3);
	a.AddNumber(2);
	a.Debug();
	printf("Hello world\r\n");
	char c;
	
	scanf("%c", &c);
	/*int stud;
	if(c == 'm' || c == 'M')
	{
		stud = 1;
	}
	else
	{
		stud = 0;
	}*/
	//////////////////////////////////////////////////////////
	/*int myArray[10];
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
	}*/
	Student s();
	assignment01();
	// Fill array with students.

	//for(int i = 0; i < 10; i++)
	//{
	//	printf( "\r\n\r\nPrinting info for student %i / 10\r\n", i );
	//	s[i].Debug();
	//}

	char fName[256];
	char lName[256];

	cout<< "Please enter the Students first name." << endl;
	//getline(cin, fName);
	//cin.getline (fName,256);
	scanf( "%s", fName );
	cout << fName << endl;
	s.SetFirstName( string( fName ) );
	cout<< "Please enter the Students last name." << endl;
	//cin.getline (lName,256);
	scanf( "%s", lName );
	s.SetLastName( string( lName ) );
	s.Debug();
	system("pause");
}
////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char* argv[])
{
	//Legacy(  );
	assignment01(  );
	return 0;
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