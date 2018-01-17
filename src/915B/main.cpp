#include <iostream>
#include <algorithm>

int main(void) {
  int n, pos, l, r;
  int left = 1;
  int right = 1;
  std::cin >> n >> pos >> l >> r;
  if ((l == 1) && (r == n)) {
    std::cout << 0;
    return 0;
  }
  if (l == 1) {
    std::cout << std::abs(r - pos) + 1;
    return 0;
  }
  if (r == n) {
    std::cout << std::abs(pos - l) + 1;
    return 0;
  }
  if (pos <= l) {
    std::cout << r - pos + 2;
    return 0;
  }
  if (pos >= r) {
    std::cout << pos - l + 2;
    return 0;
  }
  std::cout << std::min(pos - l, r - pos) + 2 + (r - l);
  return 0;
}
