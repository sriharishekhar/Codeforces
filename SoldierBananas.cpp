#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// k -> cost of one banana
// n -> initial number of dollars
// w -> number of bananas the soldier wants

int main() {
  int k;
  unsigned long sum = 0;
  unsigned long int n, w;
  cin >> k >> n >> w;
  for (int i = 1; i < w+1; i++) {
    sum = sum + (i*k);
  }
  long int borrow = sum - n;
  if(borrow > 0) {
    cout << borrow << endl;
  }
  else {
    cout << "0" << endl;
  }
  return 0;
}  

