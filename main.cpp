#include <iostream>
#include <string>

std::string getText();

int main() {
    std::string message = getText();
    std::cout << message << std::endl;
}