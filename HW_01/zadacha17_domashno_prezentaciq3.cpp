#include <iostream>
#include <string>
using std::cout;
using std::endl;;
using std::cin;
using std::getline;
using std::string;

int main() {
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(std::cin, str);

    cout << "Enter a character: ";
    cin >> ch;

    size_t first = str.find_first_of(ch);
    size_t last = str.find_last_of(ch);

    if (first != string::npos) {
        cout << "First occurrence of '" << ch << "' at position " << first << endl;
    }
    else {
        cout << "Character not found in string." << endl;
    }

    if (last != string::npos) {
        cout << "Last occurrence of '" << ch << "' at position " << last << endl;
    }
    else {
        cout << "Character not found in string." << endl;
    }

    return 0;
}
