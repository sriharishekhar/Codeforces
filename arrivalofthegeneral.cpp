#include <iostream>
#include <vector>

int main() {
  int n, a;
  std::cin >> n;
  std::vector<int> v;
  for (int i = 0; i < n; i++) {
    std::cin >> a;
    v.push_back(a);
  }
  int max = v[0], maxpos = 0;
  for (int i = 0; i < v.size(); i++) {
    if(max < v[i]) {
      max = v[i];
      maxpos = i;
    }   
  }
  int count = 0;
  while (v[0] != max) {
    std::swap(v[maxpos], v[maxpos-1]);
    maxpos--;
    count = count + 1; 
  }
  int min = v[0], minpos = 0;
  for (int i = 0; i < v.size(); i++) {
    if(min >= v[i]) {
      min = v[i];
      minpos = i;
    }   
  }
  while(v[n-1] != min) {
    std::swap(v[minpos],v[minpos+1]);
    minpos++;
    count = count + 1;
  }
  std::cout << count;
  return 0;
}