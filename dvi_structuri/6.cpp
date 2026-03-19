#include <cmath>
#include <iostream>
struct Point1 {
  double x{};
  double y{};
};
struct Point2 {
  double x{};
  double y{};
};
int main() {
  Point1 point1;
  Point2 point2;
  std::cout << "Point 1 - Enter x: ";
  std::cin >> point1.x;
  std::cout << "Point 1 - Enter y: ";
  std::cin >> point1.y;
  std::cout << "Point 2 - Enter x: ";
  std::cin >> point2.x;
  std::cout << "Point 2 - Enter y: ";
  std::cin >> point2.y;
  std::cout << "Distance: "
            << std::sqrt((point2.x - point1.x) * (point2.x - point1.x) +
                         (point2.y - point1.y) * (point2.y - point1.y));
}
