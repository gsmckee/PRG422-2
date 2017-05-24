#ifndef CLASS_STUD
#define CLASS_STUD

#include <iostream>

class Student
{
	private:
		int m_id;
		int* grade;
		int m_capacity;
		int m_counter;
		std::string m_fName;
		std::string m_lName;
	public:
		void AddGrade(int g);
		Student();
		int getID();
		int showStudent();
		~Student();
		void Debug();
		

};
#endif 