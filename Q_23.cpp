/*The Electricity Board charges their consumers according to the units consumed per month. 
The amount is calculated as per the tariff given below:

Units Consumed	Charges
up to 100 units	5.50/unit
for next 200 units	6.50/unit
for next 300 units	7.50/unit
more than 600 units	8.50/unit

Write a program to input consumer’s name, consumer’s number and the units consumed.
The program displays the following information after calculating the amount.

Money Receipt
Consumer's Number: ………………
Consumer's Name: ………………
Units consumed: ………………
Amount to be paid: ……………… */
#include <iostream>
#include <string>
using namespace std;

int main() {
    string consumerName;
    int consumerNumber, unitsConsumed;
    double amount = 0.0;

    // Input details
    cout << "Enter consumer's number: ";
    cin >> consumerNumber;
    cin.ignore();  // To ignore newline after number input
    cout << "Enter consumer's name: ";
    getline(cin, consumerName);
    cout << "Enter units consumed: ";
    cin >> unitsConsumed;

    // Calculate amount based on tariff slabs
    if (unitsConsumed <= 100) {
        amount = unitsConsumed * 5.50;
    }
    else if (unitsConsumed <= 300) {
        amount = 100 * 5.50 + (unitsConsumed - 100) * 6.50;
    }
    else if (unitsConsumed <= 600) {
        amount = 100 * 5.50 + 200 * 6.50 + (unitsConsumed - 300) * 7.50;
    }
    else {
        amount = 100 * 5.50 + 200 * 6.50 + 300 * 7.50 + (unitsConsumed - 600) * 8.50;
    }

    // Display money receipt
    cout << "\nMoney Receipt\n";
    cout << "Consumer's Number: " << consumerNumber << endl;
    cout << "Consumer's Name: " << consumerName << endl;
    cout << "Units Consumed: " << unitsConsumed << endl;
    cout << "Amount to be Paid: " << amount << endl;

    return 0;
}


