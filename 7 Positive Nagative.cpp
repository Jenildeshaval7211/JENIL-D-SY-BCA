#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number > 0)
        cout << "is s Positive number" << endl;
    else if (number < 0)
        cout << "is a Negative number" << endl;
    else
        cout << "The number is Zero" << endl;

    return 0;
}

