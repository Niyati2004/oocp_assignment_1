//WAP to print out the multiplication table of any number 
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter the number:" ;
	cin >> n;
	
	cout << "Multiplication table of Your Number:" << endl;
	for (int i = 1; i <= 10 ; i++)
	{
		cout << n << "*" << i << "=" << n * i << endl;
	}
	return 0;
}
