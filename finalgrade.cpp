#include <iostream>
#include <cstdio>
using namespace std;

int final_grade(int exam, int projects) {
  if (exam > 90 || projects > 10) {
    return 100;
  } else if (exam > 75 && projects > 5) {
    return 90;
  } else if (exam > 50 && projects > 2) {
    return 75;
  } else {
    return 0;
  }
}

int main() {
  int projects, exam;
  cin >> projects;
  cin >> exam;
  int grade = final_grade(exam, projects);
  cout << "Final grade: " << grade << endl;
  return 0;
}
