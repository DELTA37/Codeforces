#include <iostream>
#include <numeric>
#include <limits>
#include <cstdint>
#include <cstdlib>
#include <cassert>

typedef long long int llint;

int main(void) {
  size_t n;
  llint curMinValue;
  llint el;

  size_t lowIndex;
  size_t highIndex;
  size_t curIndex;
  bool init_high;

  std::cin >> n;
  for (size_t i = 0; i < n; ++i) {
    std::cin >> el;
    if (i == 0) {
      curMinValue = el;
      lowIndex = 0;
      init_high = false;
    } else {
      if (curMinValue > el) {
        curMinValue = el;
        lowIndex = i;
        init_high = false;
      } else if (curMinValue == el) {
        if (!init_high) {
          highIndex = i;
        } else {
          if (highIndex - lowIndex > i - curIndex) {
            lowIndex = curIndex;
            highIndex = i;
          }
        }
        curIndex = i;
        init_high = true;
      }
    }
  }
  if (init_high) {
    std::cout << highIndex - lowIndex;
  }
  return 0;
}
