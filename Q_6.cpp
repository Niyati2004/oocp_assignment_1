//WAP to find the avarage of N number read from the users.
#include<iostream>
using namespace std;

int main()
{
	int n;
	
	cout << "Enter your number:";
	cin >> n;
	
	double sum = 0,num;
	
	cout << "Enter the number:";
	for(int i = 0; i<n ; i++)
	{
		cin >> num;
		sum += num;
	}
	double avrg = sum /n;
	cout << " Your average is :" << avrg << endl;
	return 0;
}

//Output:
//Enter your number:4
//Enter the number:5
//4
//5
//6
// Your average is :5
