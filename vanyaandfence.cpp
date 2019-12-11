#include <iostream>
#include <vector>

int main() {
  int n, height;
  std::cin >> n >> height;
  int higherthanfence = 0;
  int lowerorequal = 0;
  for (int i = 0; i < n; i++) {
    int a;
    std::cin >> a;
    if(a > height) ++higherthanfence;
    else ++lowerorequal;
  }
  int sum = (2*higherthanfence) + lowerorequal;
  std::cout << sum;
  return 0;
}