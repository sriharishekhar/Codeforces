#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int a, b, c;
  cin >> a;
  cin >> b;
  cin >> c;
  int n[5];
  n[0] = a+b*c;
  n[1] = a*(b+c);
  n[2] = a*b*c;
  n[3] = (a+b)*c; 
  n[4] = a+b+c;
  sort(n, n+5);
  cout << n[4] << endl;
  return 0;
}  

