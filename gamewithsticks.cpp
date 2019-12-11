#include <iostream>
#include <vector>
#include <algorithm>
int main() {
  int horizontal, vertical;
  bool akshatwin = 0;
  std::cin >> horizontal >> vertical;
  if(vertical > horizontal) {
    std::swap(vertical, horizontal);
  }
  if(vertical == 1) {
    akshatwin = 1;
  }
  int count = 0; 
  while(vertical != 1) {
    --vertical;
    --horizontal;
    ++count;
  }
  if(count % 2 == 0) akshatwin = 1;
  if(akshatwin == 1) std::cout << "Akshat";
  else std::cout << "Malvika";
  return 0;
}