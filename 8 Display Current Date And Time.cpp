#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t now = time(0);
    char* data = ctime(&now);
    cout << "Current Date and Time: " << data;
    return 0;
}

