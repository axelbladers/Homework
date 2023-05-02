#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::endl;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    for (unsigned int i = str.length(); i > 0; i--) {
        std::cout << str[i - 1];
    }
    cout << endl;

    return 0;
}
