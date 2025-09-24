//WAP to add 8% tast to a given amount and round the net amount its positive nearest amount.
#include<iostream>
#include<cmath>
using namespace std;


int main ()
{
	double amount , netamount ;
	
	cout << "Enter the your amount:";
	cin >> amount;
	
	netamount = amount + (0.08 * amount);
	netamount = round(netamount);
	
	cout << "Net amount after 8% tax:" << netamount;
	
	return 0;
}


//output :
//Enter the your amount:567.89
//Net amount after 8% tax:613
