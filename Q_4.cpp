//WAP to swap two values.Also swap two value without using temporay variable.
#include<iostream>
using namespace std;

int main()
{
	int a ,b ,temp ;
	cout << " enter the Value A:" << endl;
	cin >> a;
	
	cout << "Enter the vlaue B:" << endl;
	cin >> b;
	
	cout << "Without swaping value a:" << a << endl;
	cout << "Without swaping value b:" << b  << endl;
	
	a = a+b;
	b= a-b;
	a = a-b;
	
	cout << "After swaping value a : " << a << endl;
	cout << "value b:" << b << endl; 
	
	return 0;
}

//output :
//	
//enter the Value A:
//7
//Enter the vlaue B:
//8
//Without swaping value a:7
//Without swaping value b:8
//After swaping value a : 8
//value b:7
