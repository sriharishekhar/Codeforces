#include <iostream>

int main() {
  long long n, k;
  std::cin >> n >> k;
  if(k <= (n + 1) / 2) std::cout << k * 2 - 1 << std::endl;
  else std::cout << (k - (n + 1) / 2) * 2 << std::endl;
  return 0;
}