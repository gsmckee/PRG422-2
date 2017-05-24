#include "Student.h"
#include <stdlib.h>
#include <iostream>
#include <string>

using namespace std;

void Student::Debug()
{
	printf( "id = %i\r\n", m_id );
	cout << "id = " << m_id << endl;
}
void Student::AddGrade(int g)
{

}
Student::Student()
{
	m_counter= 0;
	m_id;
	m_capacity= 10;
	/*while( m_capacity >0 && m_counter <= 9)
	{*/
		cout<< "Please enter the Students first name." << endl;
		getline(cin, m_fName);
		cout<< "Please enter the Students last name." << endl;
		getline(cin, m_lName);
		m_id= rand() % 1001;
		cout<< m_id << " is the Student ID"<< endl;
		m_counter++;
		m_capacity--;
	//}
}
Student:: ~Student()
{

}
