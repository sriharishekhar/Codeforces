#include <iostream>
#include <vector>
int main() {
  int n, a, counte = 0, counto = 0;
  std::cin >> n;
  std::vector<int> v;
  for (int i = 0; i < n; i++) {
    std::cin >> a;
    v.push_back(a);
  }
  for (int i = 0; i < n; i++) {
    if(v[i]%2 == 0) ++counte;
    else ++counto;
  }
  if(counte > counto) 
    for(int i = 0; i < n; i++) {
      if(v[i]%2 != 0) std::cout << i+1;
    }
  else
    for(int i = 0; i < n; i++) {
      if(v[i]%2 == 0) std::cout << i+1;
    }
  return 0;
}