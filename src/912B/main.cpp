#include <iostream>
#include <cmath>

typedef long long unsigned int lint;
typedef long double ldouble;

int main(void) {
  lint n, k;
  std::cin >> n >> k;
  if (k == 1) {
    std::cout << n;
  } else {
    int len = std::floor(std::log2(static_cast<ldouble>(n))) + 1;
    std::cout << (1ull << len) - 1ull;
  }
  return 0;
}
