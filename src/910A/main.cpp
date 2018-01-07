#include <iostream>
#include <algorithm>
#include <vector>
#include <iomanip>
#include <istream>

size_t find_pos(std::string const& s, int a, int b) {
  for (size_t i = b; i >= a + 1; --i) {
    if (s[i] == '1') {
      return i;
    } 
  }
  return -1;
}

int main(void) {
  size_t n, d;
  std::string s;
  std::cin >> n >> d;
  std::cin >> s;
  
  size_t pos = 0;
  size_t step = 0;
  
  while (pos < n - 1) {
    pos = find_pos(s, pos, std::min(n - 1, pos + d));
    ++step;
    if (pos == -1) {
      std::cout << -1;
      return 0;
    }
  }
  
  std::cout << step;
  return 0;
}
