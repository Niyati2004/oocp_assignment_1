
//WAP (Write A Program) to create a calculator that performs all basic arithmetic operations and displays the result
#include <iostream>
using namespace std;

int main() {
    char op;
    double num1, num2, result;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    if(op == '+') {
        result = num1 + num2;
    }
    else if(op == '-') {
        result = num1 - num2;
    }
    else if(op == '*') {
        result = num1 * num2;
    }
    else if(op == '/') {
        if(num2 != 0)
            result = num1 / num2;
        else {
            cout << "Error! Division by zero." << endl;
            return 1;
        }
    }
    else {
        cout << "Invalid operator!" << endl;
        return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}

