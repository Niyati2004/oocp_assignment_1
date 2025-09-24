// WAP that converts numbers to words.

#include<iostream>
using namespace std;

int main()
{
	string n;
	cout << "Enter the number:";
	cin >> n;
	
	for(int i = 0;i < n.length(); i++)
	{
		switch(n[i])
		{
			case '0':
				cout << "Zero";
				break;
			
			case '1':
				cout << "One";
				break;
			
			case '2':
				cout << "Two";
				break;
			
			case '3':
				cout << "Three";
				break;
			
			case '4':
				cout << "Four";
				break;
			
			case '5':
				cout << "Five";
				break;
			
			case '6':
				cout << "six";
				break;
			
			case '7':
				cout << "seven";
				break;	
			
			case '8':
				cout << "Eight";
				break;
			
			case '9':
				cout << "Nine";
				break;
			
			case '-':
				cout << "minus";
				break;
		}
		cout << " ";
	}
	cout << endl;
	return 0;
}

/* Output:

Enter the number:4578
Four Five seven Eight

*/
