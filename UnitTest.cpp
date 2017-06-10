#include "UnitTest.h"
#include "Utilities.h"
//#include "Vector.h"
#include "String.h"

#include <cstring>

using namespace std;

void Test_Extend_Array(void)
{
	int old_cap = 10;
	int new_cap = 20;
	int* array = new int[ old_cap ];
	for( int i = 0; i < 10; i++ )
		array[ i ] = i;

	ExtendArray< int >( &array, old_cap, new_cap);

	for( int i = old_cap; i < new_cap; i++ )
		array[ i ] = i;

	for( int i = 0; i < new_cap; i++ )
		cout << array[ i ] << endl;
	delete [] array;
}

void Test_Template_ExtendArray(void)
{

}

void Test_String(void)
{
	//String s1("Greg McKee");
}