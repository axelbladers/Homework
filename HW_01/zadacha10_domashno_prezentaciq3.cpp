#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int base, numDigits;
    cout << "Enter the base of the number system: ";
    cin >> base;
    cout << "Enter the number of digits: ";
    cin >> numDigits;

    int maxVal = pow(base, numDigits) - 1;
    cout << "The maximum value is: " << maxVal << endl;

    return 0;
}
