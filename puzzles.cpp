#include <iostream>
#include <vector>
#include <algorithm>

int main() { 
  int n, m, a;
  std::cin >> n >> m;
  std::vector<int> v;
  for (int i = 0; i < m; i++) {
    std::cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  std::vector<int> puzzle;
  for (int i = 0; i+n <= m; i++) puzzle.push_back(v[i+n-1] - v[i]);
  sort(puzzle.begin(), puzzle.end());
  std::cout << puzzle[0];
  return 0;
}