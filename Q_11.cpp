//WAP to display all prime number between the ranges of numbers given by user.
#include<iostream>
using namespace std;

int main()
{
	int a,b;
	
	cout << "Enter the first value:";
	cin >> a;
	
	cout << "Enter the second value:";
	cin >> b;
	
	for (int num = a;num <= b;num++)
	{
		if(num < 2)continue;
		int count = 0;
		
		for(int n = 1 ; n <= num ; n++)
		{
			if(num % n == 0)
			{
				count++;
			}
		}
		if (count == 2)
		{
			cout << num << " ";
		}
	}
	
	return 0;
}

//output:
//Enter the first value:11
//Enter the second value:23
//11 13 17 19 23
