#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::string;
using std::getline;
using std::endl;
int main() {
    string input;
    getline(cin, input); 

    for (auto& c : input) {
        if (std::islower(c)) { 
            c = std::toupper(c);
        }
        if (c == '.') { 
            c = '!'; 
        }
    }

    cout << input << endl; 

    return 0;
}
