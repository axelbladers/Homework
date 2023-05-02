#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
using std::stringstream;

int main() {
    string text;
    int num_lines = 0, num_words = 0, num_chars = 0;

    while (getline(cin, text)) {
        ++num_lines;
        stringstream ss(text);
        string word;
        while (ss >> word) {
            ++num_words;
            num_chars += word.size();
        }
    }

   cout << "Number of lines: " << num_lines << endl;
   cout << "Number of words: " << num_words << endl;
   cout << "Number of characters: " << num_chars << endl;

    return 0;
}
