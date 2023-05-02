#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

int main() {

    char gender;
    int age;
    char command;
    cout << "Enter your gender in a m/f format please!" << endl;
    cin >> gender;

        if (gender == 'm' && gender == 'M') {
            int age;
            cout << "Enter your age";
            cin >> age;
            if (age >= 30 && age <= 40) {
                cout << "You are valid for this research";
            }
        }
        else if (gender == 'f' && gender == 'F') {
            int age;
            cout << "Enter your age";
            cin >> age;
            if (age >= 25 && age <= 35) {
                cout << "You are valid for this research";
            }
            else {
                cout << "You are invalid for this research" << endl;
            }
        }
        else {
            cout << "Please enter a valid gender!" << endl;
        }
       
    return 0;
}