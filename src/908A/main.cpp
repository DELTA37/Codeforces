#include <iostream>
#include <string>

bool is_vowel_or_odd(char c) {
  static char pattern[] = {'a', 'e', 'i', 'o', 'u', '1', '3', '5', '7', '9'};
  for (size_t i = 0; i < sizeof(pattern); ++i) {
    if (c == pattern[i]) {
      return true;
    }
  }
  return false;
}


int main(void) {
  std::string s;
  std::cin >> s;
  size_t k = 0;
  for (size_t i = 0, len = s.length(); i < len; ++i) {
    k += is_vowel_or_odd(s[i]);
  }
  std::cout << k;
}
