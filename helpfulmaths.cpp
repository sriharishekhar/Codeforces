#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  std::string s;
  std::cin >> s;
  std::vector<int> v;
  v.push_back(s[0]-48);
  for (int i = 1; i < s.size(); i++) {
    if(i%2 == 0) v.push_back(s[i]-48);
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++) {
    std::cout << v[i];
    if (i <= v.size() - 2 && v.size() > 1) std::cout << "+";
  }
  return 0;
}

