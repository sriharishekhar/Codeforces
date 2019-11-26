#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {
  int l, b;
  int count = 0;
  cin >> l >> b;
  while(l < b || l == b) {
    l = l*3;
    b = b*2;
    ++count;
  }
  cout << count << endl;
  return 0;
}  
