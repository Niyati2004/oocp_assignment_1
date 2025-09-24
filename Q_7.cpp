//WAP to find out the armstrong number between 100 and 999.
#include<iostream>
using namespace std;

int main()
{
	int num , o1 , remainder , res ;
	
	cout << "Armstrong number between 100 and 999:" << endl;
	
	for (num =100; num <= 999; num++)
	{
		o1 = num;
		res = 0;
		
		while(o1 != 0)
		{
			remainder = o1 % 10;
			res += remainder * remainder * remainder;
			o1 = o1/ 10;
		}
		if(res == num)
		{
			cout << num << endl ;
		}
	}
	cout << endl;
	return 0;
}
