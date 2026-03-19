#include <iostream>
#include <string>

struct Student {
  std::string name;
  int grade;
};

int main() {
  Student students[3];

  for (int l = 0; l < 3; l++) {
    std::cout << "Student " << l + 1 << " - name: ";
    std::getline(std::cin, students[l].name);
    std::cout << "Student " << l + 1 << " - grade: ";
    std::cin >> students[l].grade;
    std::cin.ignore();
  }

  std::cout << "Results:" << std::endl;
  for (int l = 0; l < 3; l++) {
    std::cout << l + 1 << ". " << students[l].name << " - " << students[l].grade
              << std::endl;
  }

  return 0;
}
