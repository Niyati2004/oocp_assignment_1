//WAP to find out the largest value out of three value.
#include<iostream>
using namespace std;

int main()
{
	int a, b , c ;
	
	cout << "Enter the A:" << endl;
	cin >> a;
	cout << "Enter the B:" << endl;
	cin >> b;
	cout << "Enter the C:" << endl;
    cin >> c;
		
	
	if(a >= b && a >=c)
	{
		cout << "A is largest value....!";
	}
	else if (b >= a && b >= c)
	{
		cout << "B is largest value....!";
	}
	else 
	{
		cout << "C is largest value...!";
	}
	return 0;
}
