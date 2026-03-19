#include <iostream>
#include <string>

struct product {
  std::string name;
  double price{};
  double quantity{};
};

int main() {
  product store;
  std::cout << "Enter name: ";
  std::cin >> store.name;
  std::cout << "Enter price: ";
  std::cin >> store.price;
  std::cout << "Enter quantity: ";
  std::cin >> store.quantity;
  double total{store.price * store.quantity};
  std::cout << "Total: " << total << " UAH";
}
