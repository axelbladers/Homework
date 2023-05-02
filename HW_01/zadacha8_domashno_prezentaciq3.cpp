#include <iostream>
using std::cout;
using std::endl;

int main() {
    const int secondsPerMinute = 60;
    const int minutesPerHour = 60;
    const int hoursPerDay = 24;
    const int daysPerYear = 365;
    int secondsPerYear = secondsPerMinute * minutesPerHour * hoursPerDay * daysPerYear;
    cout << "Брой на секундите в една година: " << secondsPerYear << endl;
    return 0;
}
