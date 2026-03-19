#include <iostream>

struct Rectangle {
  double a{};
  double b{};
};

int main() {
  Rectangle rec;
  std::cout << "Enter width: ";
  std::cin >> rec.a;
  std::cout << "Enter height: ";
  std::cin >> rec.b;
  std::cout << "Area: " << rec.a * rec.b << std::endl;
  std::cout << "Perimeter: " << rec.a + rec.b + rec.a + rec.b;
}
