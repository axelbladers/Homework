#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main() {
    string str;
    int from, to;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter two positive integers: ";
    cin >> from >> to;

    if (from >= to || from < 0 || to > str.length()) {
        cout << "Invalid range!" << endl;
        return 1;
    }

    string substr = str.substr(from, to - from);

    cout << "Substring: " << substr << endl;

    return 0;
}
