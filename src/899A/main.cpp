#include <iostream>
#include <algorithm>


int main(void) {
  int n;
  int x;
  int single=0, multi=0;
  std::cin >> n;
  for (size_t i = 0; i < n; ++i) {
    std::cin >> x;
    if (x == 1) {
      ++single;
    } else if (x == 2) {
      ++multi;
    }
  }
  int full = std::min(single, multi);
  std::cout << full + (single - full) / 3;
  return 0;
}
