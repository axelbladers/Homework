#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main() {
    string input;
    cin >> input;

    unsigned int result;

    if (input.size() >= 2 && input[0] == '0' && (input[1] == 'b' || input[1] == 'B')) {
        result = 0;
        for (int i = 2; i < input.size(); i++) {
            result *= 2;
            if (input[i] == '1') {
                result += 1;
            }
            else if (input[i] != '0') {
                cout << "Invalid input!" << endl;
                return 1;
            }
        }
    }
    else if (input.size() >= 2 && input[0] == '0') {
        result = 0;
        for (int i = 1; i < input.size(); i++) {
            result *= 8;
            if (input[i] >= '0' && input[i] <= '7') {
                result += input[i] - '0';
            }
            else {
                cout << "Invalid input!" << endl;
                return 1;
            }
        }
    }
    else if (input.size() >= 3 && input[0] == '0' && (input[1] == 'x' || input[1] == 'X')) {
        result = 0;
        for (int i = 2; i < input.size(); i++) {
            result *= 16;
            if (input[i] >= '0' && input[i] <= '9') {
                result += input[i] - '0';
            }
            else if (input[i] >= 'a' && input[i] <= 'f') {
                result += input[i] - 'a' + 10;
            }
            else if (input[i] >= 'A' && input[i] <= 'F') {
                result += input[i] - 'A' + 10;
            }
            else {
                cout << "Invalid input!" << endl;
                return 1;
            }
        }
    }
    else {
        result = stoi(input);
    }

    cout << result << endl;

    return 0;
}
