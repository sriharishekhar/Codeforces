#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::string n;
  std::cin >> n;
  int number = (n[0] - 48)*1000 + (n[1] - 48)*100 + (n[2] - 48)*10 + (n[3] - 48);
  ++number;
  std::vector<int> v;
  v.push_back(number/1000);
  v.push_back((number - (v[0]*1000))/100);
  v.push_back((number - (v[0]*1000) - (v[1]*100))/10);
  v.push_back((number - v[0]*1000 - v[1]*100 - v[2]*10));
  int count;
  sort(v.begin(), v.end());
  count = std::distance(v.begin(), std::unique(v.begin(), v.begin() + v.size()));
  bool check = 0;
  while (check == 0) {
    if(count == v.size()) {
      check = 1;
    }
    else {
      ++number;
      v[0] = (number/1000);
      v[1] = ((number - (v[0]*1000))/100);
      v[2] = ((number - (v[0]*1000) - (v[1]*100))/10);
      v[3] = ((number - v[0]*1000 - v[1]*100 - v[2]*10));
      sort(v.begin(), v.end());
      count = std::distance(v.begin(), std::unique(v.begin(), v.begin() + v.size()));
    }
  }
  std::cout << number;
  return 0;
}


