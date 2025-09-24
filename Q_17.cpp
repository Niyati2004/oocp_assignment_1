//WAP that reads a character and print out whwther or not it is vowwl or a consonant.

#include<iostream>
using namespace std;

int main()
{
	char ch;
	
	cout << "Enter the Character:";
	cin >> ch;
	
	if(ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o' || ch == 'u'|| 
	ch == 'A' || ch == 'E'|| ch == 'O' || ch == 'U'|| ch == 'I')
	{
		cout << "This is vowel" << endl;
	}
	else
	{
		cout << "This is not vowel" << endl;
	}
	return 0;
}


/*output :
	
Enter the Character:t
This is not vowel
*/
