#include <iostream>
#include <vector>

typedef long long unsigned int ullint;

int main(void) {
  char c;
  int Q_num = 0;
  std::vector<int> A_array;
  while(std::cin.get(c)) {
    if (c == 'Q') {
      ++Q_num;
    } else if (c == 'A') {
      A_array.push_back(Q_num);
    }
  }
  ullint res = 0;
  for (size_t i = 0; i < A_array.size(); ++i) {
    res += A_array[i] * (Q_num - A_array[i]);
  }
  std::cout << res;
  return 0;
}
