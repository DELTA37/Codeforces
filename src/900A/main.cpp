#include <iostream>

int main(void) {
  int n1 = 0, n2 = 0, n = 0;
  std::cin >> n;
  for (size_t i = 0; i < n; ++i) {
    int x, y;
    std::cin >> x >> y;
    n1 += (x > 0);
    n2 += (x < 0);
  }
  if ((n1 <= 1) || (n2 <= 1)) {
    std::cout << "Yes";
  } else {
    std::cout << "No";
  }
  return 0;
}
