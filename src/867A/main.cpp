#include <iostream>
#include <iterator>

int main(void) {
  int n;
  std::cin >> n;
  char prev = ' ';
  char cur;
  int n1 = 0, n2 = 0;
  for (int i = 0; i < n; i++) {
    std::cin >> cur;
    switch (prev) {
      case 'F': {
        n2 += (cur == 'S')? 1 : 0;
        prev = cur;
        break;
      }
      case 'S': {
        n1 += (cur == 'F')? 1 : 0;
        prev = cur;
        break;
      }
      case ' ': {
        prev = cur;
        break;
      }
      default: {
        break;
      }
    }
  }
  std::cout << ((n1 > n2) ? "YES" : "NO") << std::endl;
  return 0;
}
