//#include "A.h"
#include "Student.h"
#include "Utilities.h"
//#include "String.h"
//#include "Assignment.hpp"
#include "UnitTest.h"
//#include "Vector.h"


#include <cstdio>
#include <cstring>
#include <string>
#include <array>
//#include <cstdlib>
#include <iostream>
//#include <process.h>
#include <ctime>

// _CRT_SECURE_NO_WARNINGS

using namespace std;

////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////

int main(int argc, char* argv[])
{
	char fName[256];
	char lName[256];
	Student s(fName, lName);
	//Student s;

	cout<< "Please enter the Students first name." << endl;
	scanf( "%s", fName );
	s.SetFirstName( string( fName ) );
	cout<< "Please enter the Students last name." << endl;
	scanf( "%s", lName );
	s.SetLastName( string( lName ) );


	/*for( float i= 0; i < 30.0f; i+=1.0f)
	{
		s.AddGrade(i);
	}*/
	s.Debug();

	//Legacy(  );
	//assignment01();
	//Test_Extend_Array();
	/*String s1;*/
	//s1.Unit_test();
	system("pause");
	return 0;
}

