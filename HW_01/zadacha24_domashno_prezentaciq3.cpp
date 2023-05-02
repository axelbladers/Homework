#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;
using std::isalnum;

int main() {
    string line, shortest_line, longest_line, longest_word;
    int shortest_length = INT_MAX, longest_length = INT_MIN, longest_word_length = INT_MIN;

    while (getline(cin, line)) {
        int line_length = line.length();

        if (line_length < shortest_length) {
            shortest_length = line_length;
            shortest_line = line;
        }

        if (line_length > longest_length) {
            longest_length = line_length;
            longest_line = line;
        }

        int start = 0;
        while (start < line_length) {
            while (start < line_length && !isalnum(line[start])) {
                ++start;
            }

            int end = start;
            while (end < line_length && isalnum(line[end])) {
                ++end;
            }

            int word_length = end - start;
            if (word_length > longest_word_length) {
                longest_word_length = word_length;
                longest_word = line.substr(start, word_length);
            }

            start = end;
        }
    }

    cout << "Shortest line: " << shortest_line << " (" << shortest_length << " characters)\n";
    cout << "Longest line: " << longest_line << " (" << longest_length << " characters)\n";
    cout << "Longest word: " << longest_word << " (" << longest_word_length << " characters)\n";

    return 0;
}
