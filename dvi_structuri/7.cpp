#include <iostream>

struct Time1{
    int hours;
    int minutes;
    int seconds;
};

struct Time2{
    int hours;
    int minutes;
    int seconds;
};

int main() {
    Time1 t1;
    Time2 t2;

    std::cout << "Time 1 - hours: ";
    std::cin >> t1.hours;
    std::cout << "Time 1 - minutes: ";
    std::cin >> t1.minutes;
    std::cout << "Time 1 - seconds: ";
    std::cin >> t1.seconds;

    std::cout << "Time 2 - hours: ";
    std::cin >> t2.hours;
    std::cout << "Time 2 - minutes: ";
    std::cin >> t2.minutes;
    std::cout << "Time 2 - seconds: ";
    std::cin >> t2.seconds;
    int diff1 = t1.hours*3600 + t1.minutes*60 + t1.seconds;
    int diff2 = t2.hours*3600 + t2.minutes*60 + t2.seconds;
    int diff = diff2 - diff1;
    if (diff < 0) diff = -diff;

    std::cout << "Difference: " << diff << " seconds" << std::endl;

    return 0;
}
