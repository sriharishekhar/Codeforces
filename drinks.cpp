#include <iostream>
#include <vector>

int main() {
  int n, a;
  std::cin >> n;
  std::vector<int> p;
  for (int i = 0; i < n; i++) {
    std::cin >> a;
    p.push_back(a);
  }
  float total = 0;
  for (int i = 0; i < p.size(); i++) {
    total = total + p[i];
  }
  std::cout << total / n;
  return 0;
}