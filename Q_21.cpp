
/* WAP to design a converter that converts the given distance from meter to centimetre and 
from feet to inches and vice versa.  (Note: 1 meter = 100 centimetres and 1 feet = 12 inches) */
#include<iostream>
using namespace std;

int main()
{
	int choice;
	double result , n;
	
	cout << "------Distance Converter------"<< endl;
    cout << "1. Meter to Centimeter :"<< endl;
    cout << "2. Centimeter to Meter :"<< endl;
    cout << "3. Feet to Inches :"<< endl;
    cout << "4. Inches to Feet :"<< endl;
    cout << "Enter your choice: "<< endl;
    cin >> choice;
    
    switch(choice){
    	case 1:
    		cout << "Enter distance in meters: ";
            cin >> n;
            result = n * 100;  
            cout << n << " meters = " << result << " centimeters" << endl;
            break;
            
        case 2:
        	cout << "Enter distance in centimeters: ";
            cin >> n;
            result = n / 100;  
            cout << n << " centimeters = " << result << " meters" << endl;
            break;
        
        case 3:
        	cout << "Enter distance in feet: ";
            cin >> n;
            result = n * 12;  
            cout << n << " feet = " << result << " inches"<< endl;
            break;

        case 4:
            cout << "Enter distance in inches: ";
            cin >> n;
            result = n / 12;  
            cout << n << " inches = " << result << " feet" << endl;
            break;
        
         default:
            cout << "Invalid choice Your choice....!";
            break;
	}
    
	return 0;
}

