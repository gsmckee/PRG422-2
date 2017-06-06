#include "Student.h"
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

}
int Student::getID()
{
	cout<< m_id << " is the Student ID"<< endl;
	return m_id;
}
void Student::AddGrade(int g)
{
	m_grades[m_counter] = g;
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


Student::Student(string SetFirstName, string SetLastName)
{
	m_fName = SetFirstName;
	m_lName = SetLastName;
	m_counter= 0;
	m_id;
	m_capacity= 10;
}
Student:: ~Student()
{
	delete [];
}
