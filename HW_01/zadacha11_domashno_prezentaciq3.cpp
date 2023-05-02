#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;
    int power = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += power;
        }
        power *= 2;
    }

    cout << "Decimal value: " << decimal << endl;
    return 0;
}
