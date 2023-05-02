#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::cin;

int main() {
    string str;
    getline(cin, str);  

    string result;  
    bool last_char_was_space = true;  

    for (char c : str) {
        if (c == ' ' && last_char_was_space) {
            continue;  
        }
        result += c;
        last_char_was_space = (c == ' ');
    }

    cout << result << endl;

    return 0;
}
