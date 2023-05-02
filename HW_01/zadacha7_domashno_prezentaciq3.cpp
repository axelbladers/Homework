#include <iostream>
#include <climits>

using namespace std;

int main() {
    cout << "Size of primitive types in bits:" << endl;
    cout << "char: " << CHAR_BIT << endl;
    cout << "short: " << sizeof(short) * CHAR_BIT << endl;
    cout << "int: " << sizeof(int) * CHAR_BIT << endl;
    cout << "long: " << sizeof(long) * CHAR_BIT << endl;
    cout << "long long: " << sizeof(long long) * CHAR_BIT << endl;
    cout << "float: " << sizeof(float) * CHAR_BIT << endl;
    cout << "double: " << sizeof(double) * CHAR_BIT << endl;
    cout << "long double: " << sizeof(long double) * CHAR_BIT << endl;

    cout << endl << "Size of primitive types in bytes:" << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;

    return 0;
}
