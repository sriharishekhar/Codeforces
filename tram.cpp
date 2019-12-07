#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int exit[n], enter[n];
  for (int i = 0; i < n; i++) {
    std::cin >> exit[i] >> enter[i];
  }
  int sum = 0, current = 0;
  for (int i = 0; i < n; i++) {
    current += enter[i] - exit[i];
    if(sum < current) sum = current;
  }
  std::cout << sum;
  return 0;
}