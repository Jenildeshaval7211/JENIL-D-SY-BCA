#include <iostream>
using namespace std;

int main() {
    for (int row = 0; row < 7; row++) {
        // C shape
        for (int col = 0; col < 5; col++) {
            if (row == 0 || row == 6)
                cout << "a";
            else if (col == 0)
                cout << "a";
            else
                cout << " ";
        }

        cout << "   "; // space

        // First '+'
        for (int col = 0; col < 5; col++) {
            if (col == 2 || row == 3)
                cout << "a";
            else
                cout << " ";
        }

        cout << "   "; // space

        // Second '+'
        for (int col = 0; col < 5; col++) {
            if (col == 2 || row == 3)
                cout << "a";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}
