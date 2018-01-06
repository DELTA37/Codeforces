#include <iostream>
#include <valarray>
#include <algorithm>

typedef std::valarray<long long int> point2d;

int main(void) {
  long long int yellow, green, blue;
  point2d old({0, 0});
  point2d yellow_cnt({2, 0});
  point2d green_cnt({1, 1});
  point2d blue_cnt({0, 3});
  
  std::cin >> old[0] >> old[1];

  std::cin >> yellow >> green >> blue;

  point2d res = yellow * yellow_cnt + green * green_cnt + blue * blue_cnt - old;
  
  std::cout << std::max(res[0], 0ll) + std::max(0ll, res[1]);
  return 0;
}
