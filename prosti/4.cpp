#include <iostream>
struct Time {
  int hours{};
  int minutes{};
  int seconds{};
};

int main() {
  Time time;
  std::cout << "Enter hours: ";
  std::cin >> time.hours;
  std::cout << "Enter minutes: ";
  std::cin >> time.minutes;
  std::cout << "Enter seconds: ";
  std::cin >> time.seconds;
  std::cout << "Total seconds:"
            << (time.hours * 3600) + (time.minutes * 60) + time.seconds;
}
