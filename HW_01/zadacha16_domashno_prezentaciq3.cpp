#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int main() {
    string str;
    char c;

    cout << "Enter a string: ";
    getline(std::cin, str);

    cout << "Enter a character to search for: ";
    cin >> c;

    int count = 0;
    for (unsigned int i = 0; i < str.length(); i++) {
        if (str[i] == c) {
            count++;
        }
    }

   cout << "The character " << c << " appears " << count << " times in the string." << std::endl;

    return 0;
}
