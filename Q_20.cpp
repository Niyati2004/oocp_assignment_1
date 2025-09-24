/*A serial trasmisson line can transmit 960 characters per second , 
WAP that will calculate total time required to send to send a file if the file's size is given.
(check it for 400 MB file size) */

#include<iostream>
using namespace std;

int main()
{
	double filesize , convmb, time;
	
	cout << "Enter the your file size:";
	cin >> filesize;
	
	convmb = filesize * 1024 * 1024;
	time = convmb / 960;
	
	cout << "Time required:" << time << endl;
	return 0;
}
