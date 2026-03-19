#include <iostream>

struct Rectangle {
  double width;
  double height;
};

struct Rectangle2 {
  double width;
  double height;
};

int main() {
  Rectangle r1;
  Rectangle2 r2;

  std::cout << "Rectangle 1 - width: ";
  std::cin >> r1.width;
  std::cout << "Rectangle 1 - height: ";
  std::cin >> r1.height;

  std::cout << "Rectangle 2 - width: ";
  std::cin >> r2.width;
  std::cout << "Rectangle 2 - height: ";
  std::cin >> r2.height;

  double area1 = r1.width * r1.height;
  double area2 = r2.width * r2.height;

  if (area1 > area2) {
    std::cout << "Rectangle 1 is larger (area: " << area1 << ")" << std::endl;
  } else if (area2 > area1) {
    std::cout << "Rectangle 2 is larger (area: " << area2 << ")" << std::endl;
  } else {
    std::cout << "Areas are equal (" << area1 << ")" << std::endl;
  }

  return 0;
}
