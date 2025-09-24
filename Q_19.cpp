//WAP that thr finds the maximum range of a triangle's third edge,where the side length are all integers. [Note : side3(side1+side2)-2]

#include<iostream>
using namespace std;

int main()
{
	int side1 , side2 , side3;
	
	cout << "Enter the side1:";
	cin >> side1;
	
	cout << "Enter the side2:";
	cin >> side2;
	
	side3 = side1 + side2 -2;
	
	cout << "The maximum range:" << side3 << endl;
	return 0;
}


/*
Output:
Enter the side1:6
Enter the side2:9
The maximum range:13

*/

