#include <iostream>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s[n];
  for (int i = 0; i < n; i++) {
    if(i%2 != 0) {
      s[i] = "I love";
    }
    else {
      s[i] = "I hate";
    }
  }
    for (int i = 0; i < n; i++) {
    if(n > 1) {
      cout << s[i] << " ";
      if(i != n-1) {
        cout << "that" << " ";
      }
    }
    else {
      cout << s[i] << " ";
    }
  }
  cout << "it";
  return 0;
}
