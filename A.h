#ifndef CLASS_A
#define CLASS_A

class A
{
public:
	A(); // default constructor 
	// Destructor - place holder to release allocated memory
	~A();// memory deallocation operator
	void AddNumber(int n);
	void Debug(void);

private:
	// The notation <TYPE*> means we are declaring a pointer to a variable
	// of type int.

	int* array;
	int m_counter;
};

#endif