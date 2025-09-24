//WAP to add five number using while and for loop.


#include<iostream>
using namespace std;

int main()
{
	int i , num ,sum1 = 0 , sum2 = 0;
	
	i = 1;
	cout << "Enter the five number:";
	while(i <= 5)
	{
		cin >> num;
		sum1+= num;
		i++;
	}
	
	cout << "Sum using the while loop : " << sum1 << endl;
	
	cout << " Enter the five number:" << endl;
	for(i=1; i <= 5 ; i++)
	{
		cin >> num;
		sum2 += num;
	}
	cout << " Sum using for loop: " << sum2 << endl;
	return 0;
}

//Output:
//	Enter the five number:5
//56
//78
//98
//78
//Sum using the while loop : 315
// Enter the five number:
//78
//56
//45
//6
//46
// Sum using for loop: 231

