#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int a[n], b[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i] >> b[i];
  }
  int sum = b[0], z = 0;
  for (int i = 0; i < n - 1; i++) {
    z = (b[i] - a[i+1]) + b[i+1];
    b[i+1] = b[i+1] + (b[i] - a[i+1]); 
    if(sum < z) sum = z;
  }
  std::cout << sum;
  return 0;
}