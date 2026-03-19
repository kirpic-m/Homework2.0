#include <iostream>
#include <string>

struct Product {
    std::string name;
    double price;
};

struct Product2 {
    std::string name;
    double price;
};

int main() {
    Product p1;
    Product2 p2;

    std::cout << "Product 1 - name: ";
    std::getline(std::cin, p1.name);
    std::cout << "Product 1 - price: ";
    std::cin >> p1.price;
    std::cin.ignore();
    std::cout << "Product 2 - name: ";
    std::getline(std::cin, p2.name);
    std::cout << "Product 2 - price: ";
    std::cin >> p2.price;

    if (p1.price > p2.price) {
        std::cout << p1.name << " is more expensive" << std::endl;
    } else if (p2.price > p1.price) {
        std::cout << p2.name << " is more expensive" << std::endl;
    } else {
        std::cout << "Prices are equal" << std::endl;
    }

    return 0;
}