#include <iostream>
#include <algorithm>

int main(void) {
  int n, m;
  int right = 0;
  int a, b;
  std::cin >> n >> m;
  for (size_t i = 0; i < n; ++i) {
    std::cin >> a >> b;
    if (a > right) {
      std::cout << "NO";
      return 0;
    }
    right = std::max(b, right);
  }
  if (right >= m) {
    std::cout << "YES";
    return 0;
  }
  std::cout << "NO";
  return 0;
}
