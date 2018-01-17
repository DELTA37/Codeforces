#include <iostream>

int main(void) {
  std::string fname, lname;
  std::getline(std::cin, fname, ' ');
  std::getline(std::cin, lname);
  for (size_t i = 1; i < fname.length(); ++i) {
    if (fname[i] >= lname[0]) {
      std::cout << fname.substr(0, i) + lname[0];
      return 0;
    }
  }
  std::cout << fname + lname[0];
  return 0;
}
