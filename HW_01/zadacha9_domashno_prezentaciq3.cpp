#include <iostream>

int main() {
    const int millisecondsPerSecond = 1000;
    const int secondsPerMinute = 60;
    const int minutesPerHour = 60;
    const int hoursPerDay = 24;

    long long totalMilliseconds;
    std::cout << "Въведете интервал от време в милисекунди: ";
    std::cin >> totalMilliseconds;

    long long totalSeconds = totalMilliseconds / millisecondsPerSecond;
    long long totalMinutes = totalSeconds / secondsPerMinute;
    long long totalHours = totalMinutes / minutesPerHour;
    long long totalDays = totalHours / hoursPerDay;

    int remainingHours = totalHours % hoursPerDay;
    int remainingMinutes = totalMinutes % minutesPerHour;
    int remainingSeconds = totalSeconds % secondsPerMinute;
    int remainingMilliseconds = totalMilliseconds % millisecondsPerSecond;

    std::cout << totalDays << " " << remainingHours << " " << remainingMinutes << " " << remainingSeconds << " " << remainingMilliseconds << std::endl;

    return 0;
}
