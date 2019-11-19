/*
Q.
Theatre Square in the capital city of Berland has a rectangular shape with the size n × m meters. 
On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size a × a.

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. 
It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.
*/

#include <iostream>

using namespace std;

void Theatre(int n, int m, int a) {
  int count = 0;
  while (n > 0) {
    n = n - a;
    int mnew = m;
    while (mnew > 0) {
      mnew = mnew - a;
      ++count;
      if (mnew <= a) {
        ++count;
      }
    }
  }
  cout << count << endl;
}  

int main() {
  int n = 10,m = 10;
  long int a = 4;
  cin >> n >> m >> a;
  Theatre(n,m,a);
  return 0;
}
