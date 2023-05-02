#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;
using std::stringstream;
using std::remove_if;
using std::ispunct;

int main()
{
   string input;
   getline(cin, input);

   stringstream ss(input);

    int wordCount = 0;
    int totalLength = 0;

    string word;
    while (ss >> word) {
        word.erase(remove_if(word.begin(), word.end(), [](char c) {
            return ispunct(c);
            }), word.end());

        totalLength += word.length();
        ++wordCount;
    }

    double averageLength = static_cast<double>(totalLength) / static_cast<double>(wordCount);

    cout << "Average word length: " << averageLength << endl;

    return 0;
}
