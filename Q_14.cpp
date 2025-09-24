//WAP to create arithmatic calculator using if...else and switch...case type of control statemantes.

#include<iostream>
using namespace std;

int main()
{
	int a , b ;
	char operater;
	
	cout << "Enter the your first number:";
	cin >> a;
	
	cout << "Enter the your second number:";
	cin >> b;
	
	cout << "Enter the operater:";
	cin >> operater;
	
//--------------------using if...else condition--------------------
//	if(operater == '+')
//	{
//		cout << "Your Answer is : " << a + b;
//	}
//	else if(operater == '-')
//	{
//		cout << "Your Answer is : " << a - b;
//	}
//	else if(operater == '/')
//	{
//		cout << "Your Answer is : " << a / b;
//	}
//	else if(operater == '*')
//	{
//		cout << "Your Answer is : " << a * b;
//	}
//	else
//	{
//		cout << "Invalid Your operater" ;
//	}

//--------------------using switch....case condition--------------------

    switch(operater)
    {
    	case '+':
    		cout << " Your Answer is : " << a + b;
    	
    	case '-':
    		cout << " Your Answer is : " << a - b;
    		
    	case '/':
    		cout << " Your Answer is : " << a / b;
    		
    	case '*':
    		cout << " Your Answer is : " << a * b;
    		
    	default:
    		cout << "Invalid Your operater" ;
	}
	return 0;
}

//Output:
//--------------------using if...else condition--------------------
//Enter the your first number:4
//Enter the your second number:5
//Enter the operater:-
//Your Answer is : -1

//--------------------using switch....case condition--------------------
//Enter the your first number:5
//Enter the your second number:6
//Enter the operater:*
//Your Answer is : 30
