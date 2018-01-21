#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdint>

bool is_perfect(int a) {
  if (a < 0) {
    return false;
  }
  int p = int(sqrt(a));
  if (p * p == a) {
    return true;
  }
  return false;
}

int main(void) {
  size_t n;
  int a;
  int m = INT32_MIN;
  std::cin >> n;
  for (size_t i = 0; i < n; ++i) {
    std::cin >> a;
    if (!is_perfect(a)) {
      m = std::max(a, m);
    }
  }
  std::cout << m;
  return 0;
}
