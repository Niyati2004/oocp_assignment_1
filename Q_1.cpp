//WAP that print the size of the fundamental datatypes.
#include<iostream>
using namespace std;

int main()
{
	cout << "----- : Size of Datatype : -----" << endl;
	cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of short: " << sizeof(short)  << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    cout << "Size of bool: " << sizeof(bool) << endl;
    
	return 0;
}

//Output:
//----- : Size of Datatype : -----
//Size of char: 1
//Size of short: 2
//Size of int: 4
//Size of float: 4
//Size of double: 8
//Size of bool: 1
