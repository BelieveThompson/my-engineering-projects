#include <iostream>
using namespace std;

// Believe Thompson - Engineering Project
// Improved Calculator with error handling

int main() {
    double num1, num2, result;
    char op;
    char choice;

    cout << "===================================" << endl;
    cout << "  Believe Thompson - Engineering Calculator" << endl;
    cout << "===================================" << endl;

    do {
        cout << "\nEnter first number: ";
        cin >> num1;
        
        cout << "Enter operator (+, -, *, /): ";
        cin >> op;
        
        cout << "Enter second number: ";
        cin >> num2;

        bool valid = true;

        switch(op) {
            case '+':
                result = num1 + num2;
                break;
            case '-':
                result = num1 - num2;
                break;
            case '*':
                result = num1 * num2;
                break;
            case '/':
                if(num2 != 0) {
                    result = num1 / num2;
                } else {
                    cout << "Error! Cannot divide by zero!" << endl;
                    valid = false;
                }
                break;
            default:
                cout << "Error! Invalid operator!" << endl;
                valid = false;
        }

        if(valid) {
            cout << "Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;
        }

        cout << "\nDo you want to calculate again? (y/n): ";
        cin >> choice;

    } while(choice == 'y' || choice == 'Y');

    cout << "\nThank you for using Believe Thompson Calculator!" << endl;
    return 0;
}