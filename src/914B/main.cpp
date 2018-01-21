#include <iostream>
#include <algorithm>
#include <vector>

int main(void) {
  size_t n;
  std::cin >> n;
  std::vector<int> a(n);

  for (size_t i = 0; i < n; ++i) {
    std::cin >> a[i];
  }
  if (n % 2 == 1) {
    std::cout << "Conan";
    return 0;
  }
  std::sort(a.begin(), a.end());

  int init = a[0];
  int k = 1;
  for (size_t i = 1; i < a.size(); ++i) {
    if (a[i] == init) {
      ++k;
    } else {
      if (k % 2 == 1) {
        std::cout << "Conan";
        return 0;
      }
      k = 1;
      init = a[i];
    }
  }
  std::cout << "Agasa";
  return 0;
}
