#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  int n1 = 0, n2 = 0, n3 = 0, n4 = 0;
  for (int i = 0; i < n; i++) {
    if(a[i] == 1) ++n1;
    else if(a[i] == 2) ++n2;
    else if(a[i] == 3) ++n3;
    else if(a[i] == 4) ++n4;
  }
  
  int taxi = 0;
  taxi += n4;

  bool n2left = 0;
  if(n2 >= 2) {
    if(n2 % 2 == 0) {
      taxi += (n2/2);  
    }
    else {
      taxi += (n2/2);
      n2left = 1;
      n2 = 1;
    }
  }
  else if(n2 == 1) {
    n2left = 1;
  }    

  bool n1left = 0;
  if(n3 == n1) {
    taxi += n1;
  }
  else if(n3 > n1) {
    taxi += n3;
  }
  else if(n3 < n1) {
    taxi += n3;
    n1 -= n3;
    n1left = 1;
  }

  if(n1left == 1) {
    if(n2left == 1) {
      if(n1 > 2) {
        ++taxi;
        n1 -= 2;
        n2left = 0;
      }
      else if(n1 <= 2) {
        ++taxi;
        n1left = 0;
        n2left = 0;
      } 
    }
  } 
  if(n1left == 1) { 
    if(n2left == 0) {
      if(n1 > 4) {
        if(n1 % 4 == 0) {
          taxi += (n1/4);
        }
        else {
          taxi += (n1/4) + 1;
        } 
      }
      else if(n1 <= 4) {
        ++taxi;
      }  
    }
  }
  if(n1left == 0) {
    if(n2left == 1) {
      ++taxi;
    }
  }  
  std::cout << taxi << std::endl;
  return 0;
}