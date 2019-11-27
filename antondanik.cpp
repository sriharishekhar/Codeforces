#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;

int main() {
  int n, counta = 0, countd = 0;
  string s;
  cin >> n;
  cin >> s;
  for (int i = 0; i < n; i++) {
    if(s[i] == 65) {
      ++counta;
    }
    else {
      ++countd;
    }
  }
  if(counta > countd) {
    cout << "Anton";
  }
  else if(counta < countd) {
    cout << "Danik";
  }
  else {
    cout << "Friendship";
  }
  return 0;
}