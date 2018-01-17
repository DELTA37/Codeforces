#include <iostream>

int main(void) {
  int N;
  std::cin >> N;
  int k = N / 2;
  if (N % 2 == 0) {
    std::cout << k * (k + 1);
  } else {
    std::cout << k * (k + 2) + 1;
  }
  return 0;
}
