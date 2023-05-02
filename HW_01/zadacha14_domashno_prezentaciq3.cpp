#include <iostream>
#include <string>
using std::cout;
using std::string;
using std::endl;

int main() {
    int decimal = 123;
    int binary = 0b1111011;
    int octal = 0173;
    int hex = 0x7b;
    long long longDecimal = 1234567890123456789LL;
    unsigned int unsignedDecimal = 4294967295u;
    float floatingPoint = 3.14f;
    double doublePrecision = 3.14159265358979323846264338327950288419716939937510;
    long double longDoublePrecision = 3.14159265358979323846264338327950288419716939937510L;
    string stringLiteral = "Hello, world!";

    cout << decimal << std::endl;
    cout << binary << std::endl;
    cout << octal << std::endl;
    cout << hex << std::endl;
    cout << longDecimal << std::endl;
    cout << unsignedDecimal << std::endl;
    cout << floatingPoint << std::endl;
    cout << doublePrecision << std::endl;
    cout << longDoublePrecision << std::endl;
    cout << stringLiteral << std::endl;

    return 0;
}
