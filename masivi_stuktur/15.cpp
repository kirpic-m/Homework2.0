#include <iostream>
#include <string>

struct Product {
    std::string name;
    double price;
};

int main() {
    Product products[3];

    for (int i = 0; i < 3; i++) {
        std::cout << "Product " << i + 1 << " - name: ";
        std::getline(std::cin, products[i].name);
        std::cout << "Product " << i + 1 << " - price: ";
        std::cin >> products[i].price;
        std::cin.ignore();
    }

    int minIndex = 0;
    for (int i = 1; i < 3; i++) {
        if (products[i].price < products[minIndex].price) {
            minIndex = i;
        }
    }

    std::cout << "Cheapest: " << products[minIndex].name << " (" << products[minIndex].price << " UAH)" << std::endl;

    return 0;
}