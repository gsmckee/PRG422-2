#ifndef CLASS_STUD
#define CLASS_STUD

#include <iostream>
#include <string>

class Student
{
	private:
		int m_id;
		float* m_grades;
		int m_capacity;
		int m_counter;
		std::string m_fName;
		std::string m_lName;
	public:
		void AddGrade(float g);
		Student(std::string SetFirstName,std::string SetLastName);
		Student();
		int getID();
		int showStudent();
		~Student();
		void Debug();
		void SetFirstName( std::string& fName );
		void SetLastName( std::string& lName );
		

};
#endif 