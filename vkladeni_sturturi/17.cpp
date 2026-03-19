#include <cmath>
#include <iomanip>
#include <iostream>
struct Point {
  double x;
  double y;
};
struct Segment {
  Point start;
  Point end;
};
int main() {
  Segment seg;
  std::cout << "Start point - x: ";
  std::cin >> seg.start.x;
  std::cout << "Start point - y: ";
  std::cin >> seg.start.y;
  std::cout << "End point - x: ";
  std::cin >> seg.end.x;
  std::cout << "End point - y: ";
  std::cin >> seg.end.y;
  double length = std::sqrt(std::pow(seg.end.x - seg.start.x, 2) +
                            std::pow(seg.end.y - seg.start.y, 2));
  std::cout << "Segment length: " << std::fixed << std::setprecision(2)
            << length << std::endl;
  return 0;
}
