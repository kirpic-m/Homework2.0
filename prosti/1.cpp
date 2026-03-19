#include <iostream>
#include <string>
struct Book {
  std::string title;
  std::string author;
  int year{};
};

int main() {
  Book book;
  std::cout << "Enter title: ";
  std::getline(std::cin, book.title);
  std::cout << "Enter author: ";
  std::getline(std::cin, book.author);
  std::cout << "Enter year: ";
  std::cin >> book.year;
  std::cout << "\"" << book.title << "\"" << " by " << book.author << " ("
            << book.year << ")";
}
