#include <iostream>
using namespace std;

void show() {
    double x, y;
    char op;

    cout << "Enter First Number: ";
    cin >> x;
    cout << "Enter Second Number: ";
    cin >> y;
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

if(op == '+')
{
	
}
else if(op == '-')
{
	
}
else if(op == '*')
{
	
}
else if(op == '/')
{
	
}
else
{
	
}
    switch (op) {
        case '+':
            cout << "Addition: " << x + y << "\n";
            break;

        case '-':
            cout << "Subtraction: " << x - y << "\n";
            break;

        case '*':
            cout << "Multiplication: " << x * y << "\n";
            break;

        case '/':
            if (y != 0) {
                cout << "Division: " << x / y << "\n";
            } else {
                cout << "Invalid second number (division by zero)\n";
            }
            break;

            
        default:
            cout << "Invalid operator entered.\n";
    }
}




