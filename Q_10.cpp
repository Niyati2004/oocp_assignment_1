//WAP to display fibonacci series of n terms where value of n must be read for the user.

#include<iostream>
using namespace std;

int main()
{
	int n , a = 0 , b = 1 , c;
	
	cout << "Enter Your number:";
	cin >> n;
	
	cout << "Your Fibonacci series:";
	for(int i = 1; i <= n ; i++)
	{
		cout << a << " ";
		c= a+b;
		a=b;
		b=c;
	}
	return 0;
}

//output:
//	Enter Your number:6
//Your Fibonacci series:0 1 1 2 3 5
