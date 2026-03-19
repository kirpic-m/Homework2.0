#include <cmath>
#include <iostream>

struct Point {
  double x{};
  double y{};
};

int main() {
  Point point;
  std::cout << "Enter x: ";
  std::cin >> point.x;
  std::cout << "Enter y: ";
  std::cin >> point.y;
  double distance = std::sqrt(point.x * point.x + point.y * point.y);
  std::cout << "Distance from origin: " << distance;
}
