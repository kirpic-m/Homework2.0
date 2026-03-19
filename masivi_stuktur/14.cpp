#include <iostream>
#include <string>

struct Product {
    std::string name;
    double price;
    int quantity;
};

int main() {
    Product products[3];
    double total = 0;

    for (int i = 0; i < 3; i++) {
        std::cout << "Product " << i + 1 << " - name: ";
        std::getline(std::cin, products[i].name);
        std::cout << "Product " << i + 1 << " - price: ";
        std::cin >> products[i].price;
        std::cout << "Product " << i + 1 << " - quantity: ";
        std::cin >> products[i].quantity;
        std::cin.ignore();
        total += products[i].price * products[i].quantity;
    }

    std::cout << "Total warehouse value: " << total << " UAH" << std::endl;

    return 0;
}