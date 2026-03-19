#include <iostream>
#include <string>

struct Student {
  std::string name;
  int grade;
};

int main() {
  Student students[3];
  double sum = 0;

  for (int i = 0; i < 3; i++) {
    std::cout << "Student " << i + 1 << " - name: ";
    std::getline(std::cin, students[i].name);
    std::cout << "Student " << i + 1 << " - grade: ";
    std::cin >> students[i].grade;
    std::cin.ignore();
    sum += students[i].grade;
  }

  std::cout << "Average grade: " << sum / 3.0 << std::endl;

  return 0;
}
