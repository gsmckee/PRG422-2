#include "Student.h"
#include "Utilities.h"
#include "Vector.h"
#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

void Student::Debug()
{
	//printf( "id = %i\r\n", m_id );

	cout << "ID: " << m_id << endl;
	cout << "First Name = " << m_fName << endl;
	cout << "Last Name = " << m_lName << endl;
	cout << "Your grades are: " << endl;
	for( int i = 0; i < m_counter; i++)
	{
		cout << m_grades[i] << endl;
	}
}
int Student::getID()
{
	cout<< m_id << " is the Student ID"<< endl;
	return m_id;
}
void Student::AddGrade(float g)
{
	m_grades[m_counter] = g;
	m_counter++;

	if ( m_counter == m_capacity)
	{
		/*cout << "Your allocation for grades is at capacity." << endl;
		cout << "Would you like to increase the capacity?" << endl;
		scanf( "%c", c)*/
		//ExtendArrayint( &m_grades, m_capacity, m_capacity + 10 );
		ExtendArray( &m_grades, m_capacity, m_capacity + 10 );
		m_capacity += 10;

	}

	return;
}

void Student::SetFirstName( string& fName )
{
	m_fName = fName;
}

void Student::SetLastName( string& lName )
{
	m_lName = lName;
}


Student::Student()
{
	m_fName = "John";
	m_lName = "Doe";
	m_counter= 0;
	m_id = 0;
	m_capacity= 10;
	m_grades = new float[ m_capacity ];
}

Student::Student(string SetFirstName, string SetLastName)
{
	m_fName = SetFirstName;
	m_lName = SetLastName;
	m_counter= 0;
	m_id = 0;
	m_capacity= 10;
	m_grades = new float[ m_capacity ];
}
Student:: ~Student()
{
	delete [] m_grades;
}
