#include <iostream>
#include <vector>
#include <algorithm>
int main() {
  int n;
  std::cin >> n;
  std::vector<int> v;
  for (int i = 0; i < n; i++) {
    int a;
    std::cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end(), std::greater<int>());
  int total = 0;
  for (int i = 0; i < v.size(); i++) {
    total += v[i];
  }
  int position = 0;
  int i = -1, sum = 0; 
  while(sum <= (total - sum)) {
    sum += v[++i];
    if(sum > (total - sum)) position = i;
  }
  std::cout << position + 1 << std::endl;
  return 0;
}