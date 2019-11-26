#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {
  string s;
  cin >> s;
  int a[4];
  for (int i = 0; i < 4; i++) {
    a[i] = s[i] - 48;
  }
  a[3] = a[3] + 1;
  for (int j = 0; j < 3; j++) {
    for (int i = j + 1; i < 4; i++) {
      if(a[j] == a[i]) {
        a[i] = a[i] + 1;
      }
    }
  }
  for (int i = 0; i < 4; i++) {
    cout << a[i];
  }  
  cout << endl;
  return 0;
}  
