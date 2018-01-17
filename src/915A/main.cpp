#include <iostream>

int main(void) {
  int n, k;
  int a;
  int chosen = 0;
  std::cin >> n >> k;
  for (size_t i = 0; i < n; ++i) {
    std::cin >> a;
    if ((k % a == 0) && (a  >= chosen)) {
      chosen = a;
    }
  }
  std::cout << k / chosen;
}
