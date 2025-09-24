//Write a menu-driven program to convert a given decimal number into equivalent binary, octal, and hexadecimal values.
#include <iostream>
#include <iomanip>  // For std::hex, std::oct
using namespace std;

// Function to convert decimal to binary
void decimalToBinary(int n) {
    int binary[32], i = 0;
    if (n == 0) {
        cout << 0;
        return;
    }
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << binary[j];
}

int main() {
    int decimal, choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Convert to Binary\n";
        cout << "2. Convert to Octal\n";
        cout << "3. Convert to Hexadecimal\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice >= 1 && choice <= 3) {
            cout << "Enter decimal number: ";
            cin >> decimal;
            cout << "Result: ";
        }

        switch (choice) {
            case 1:
                decimalToBinary(decimal);
                break;
            case 2:
                cout << oct << decimal;  // Octal output
                break;
            case 3:
                cout << hex << decimal;  // Hexadecimal output
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
        cout << "\n";
    } while (choice != 4);

    return 0;
}

