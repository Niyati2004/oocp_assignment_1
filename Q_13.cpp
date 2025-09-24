//WAP to check whether the give number is palindrome or not.

#include<iostream>
using namespace std;

int main()
{
    int n,a,reverse=0,rem;

    cout << "Enter Your number: ";
    cin >> n;

    a = n;  

    while (n > 0)
    {
        rem = n % 10;                
        reverse = reverse * 10 + rem; 
        n = n / 10;                 
    }

    if (a == reverse)
    {
        cout << "This Number is a palindrome.";
    }
    else
    {
        cout << a << "This Number is not a palindrome.";
    }

    return 0;
}

//Output:
//Enter Your number: 676
//This Number is a palindrome.

