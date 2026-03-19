#include <iostream>
#include <string>

struct Student {
  std::string name;
  int grade;
};

int main() {
  Student students[3];

  for (int i = 0; i < 3; i++) {
    std::cout << "Student " << i + 1 << " - name: ";
    std::getline(std::cin, students[i].name);
    std::cout << "Student " << i + 1 << " - grade: ";
    std::cin >> students[i].grade;
    std::cin.ignore();
  }

  int bestgrade = 0;
  for (int i = 1; i < 3; i++) {
    if (students[i].grade > students[bestgrade].grade) {
      bestgrade = i;
    }
  }

  std::cout << "Best student: " << students[bestgrade].name << " ("
            << students[bestgrade].grade << ")" << std::endl;

  return 0;
}
