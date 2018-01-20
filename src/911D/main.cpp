#include <iostream>
#include <vector>

size_t count(size_t l, size_t r) {
  return ((r - l) * (r - l + 1) / 2) % 2;
}

size_t countInversion(const std::vector<size_t>& m) {
  size_t counter = 0;
  for (size_t i = 0; i < m.size(); ++i) {
    for (size_t j = 0; j < i; ++j) {
      if (m[j] > m[i]) {
        ++counter;
        counter %= 2;
      }
    }
  }
  return counter;
}

int main(void) {
  size_t n;
  std::cin >> n;
  std::vector<size_t> arr(n);
  for (size_t i = 0; i < n; ++i) {
    std::cin >> arr[i];
  }
  size_t startCount = countInversion(arr);

  size_t m;
  size_t l, r;
  std::cin >> m;
  for (size_t i = 0; i < m; ++i) {
    std::cin >> l >> r;
    startCount += count(l, r);
    startCount %= 2;
    if (startCount % 2 == 0) {
      std::cout << "even" << std::endl;
    } else {
      std::cout << "odd" << std::endl;
    }
  }
  return 0;
}

