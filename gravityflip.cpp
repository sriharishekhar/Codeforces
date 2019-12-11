#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> v;
  for (int i = 0; i < n; ++i) {
    int a;
    std::cin >> a;
    v.push_back(a);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++)
      if(v[j] > v[j+1]) std::swap(v[j], v[j+1]);
  }
  for (int i = 0; i < v.size(); ++i) std::cout << v[i] << " ";
  return 0;
}