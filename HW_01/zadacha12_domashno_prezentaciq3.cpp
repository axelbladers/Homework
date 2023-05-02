#include <iostream>
#include <string>
using namespace std;

int main() {
    string hex;
    cout << "Enter a hexadecimal number: ";
    cin >> hex;

    int decimal = stoi(hex, nullptr, 16);

    cout << "Decimal value: " << decimal << endl;
    return 0;
}
