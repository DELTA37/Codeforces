#include <iostream>
#include <cstdint>

int main(void) {
  uint32_t n, m;
  std::cin >> n >> m;
  if (n <= 31) {
    std::cout << m % (1 << n);
  } else {
    std::cout << m;
  }
  m % (1 << n);
  return 0;
}
