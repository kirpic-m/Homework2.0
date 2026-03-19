#include <iostream>
#include <string>

struct Date {
  int day;
  int month;
  int year;
};

struct Student {
  std::string name;
  Date birthDate;
};

int main() {
  Student s;

  std::cout << "Enter name: ";
  std::getline(std::cin, s.name);
  std::cout << "Enter day: ";
  std::cin >> s.birthDate.day;
  std::cout << "Enter month: ";
  std::cin >> s.birthDate.month;
  std::cout << "Enter year: ";
  std::cin >> s.birthDate.year;

  std::cout << s.name << " was born on " << s.birthDate.day << "."
            << s.birthDate.month << "." << s.birthDate.year << std::endl;

  return 0;
}
