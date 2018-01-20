#include <iostream>
#include <algorithm>

int main(void) {
  
  int n, a, b;
  int val = 0;
  std::cin >> n >> a >> b;

  for (int i = 1; i <= n - 1; ++i) {
    val = std::max(val, std::min(a / i, b / (n - i)));
  }
  std::cout << val;
  return 0;
}
