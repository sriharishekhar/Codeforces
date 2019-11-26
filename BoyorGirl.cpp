#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
  int count = 1;
  string s;
  cin >> s;
  sort(s.begin(), s.end());
  for (int i = 0; i < s.size()-1; i++) {
    if(s[i] != s[i+1])
      count++;
  }    
  if (count % 2 == 0) {
    cout << "CHAT WITH HER!" << endl;
  }
  else {
    cout << "IGNORE HIM!" << endl;
  }
  return 0;
}

