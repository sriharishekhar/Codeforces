#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int a, b, c, d;
  std::cin >> a;
  std::cin >> b;
  std::cin >> c;
  std::cin >> d;
  int number;
  std::cin >> number;
  std::vector<int> list;
  for (int i = 1; i <= number; i++) {
    if(number >= a) {
      if(i % a == 0) list.push_back(i);
    }
    if(number >= b) {
      if(i % b == 0) list.push_back(i);
    }
    if(number >= c) {
      if(i % c == 0) list.push_back(i);
    }
    if(number >= d) {
      if(i % d == 0) list.push_back(i);
    }
  }
  int count = 0;
  std::sort(list.begin(), list.end());
  count = std::distance(list.begin(), std::unique(list.begin(), list.end()));
  std::cout << count;
}