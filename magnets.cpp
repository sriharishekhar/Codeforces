#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];
  int count = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int j = 0;
  while (j != n-1) {
    if(a[j] != a[j+1]) {
      ++count;
      j++;
    }
    else {
      j++;
    }
  }
  cout << count+1;
  return 0;
}