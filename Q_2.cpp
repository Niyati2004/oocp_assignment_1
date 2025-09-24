//WAP to allow the user to enter multipal number until a zero is entered.After zero is entered the programe should 
//print cout thr positive and nagative value.
#include<iostream>
using namespace std;

int main()
{
   int num;
   int posvalue = 0	, negvalue = 0;
   
   cout << "Enter the number:" << endl;
   while(true)
   {
   	cin >> num;
   	
    if(num == 0)
   	{
   		break;
	}
	else if(num > 0)
	{
		posvalue++;
	}
	else
	{
		negvalue++;
	}
   }
   
   cout << "Count the positive value:" << posvalue << endl;
   cout << "Count the nagative value:" << negvalue << endl;
   
   return 0;
}


//Output:
//Enter the number:
//5
//4
//7
//8
//-8
//-7
//0
//Count the positive value:4
//Count the nagative value:2
