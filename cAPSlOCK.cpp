#include <iostream>
#include <string>
#include <algorithm>



using namespace std;

int main() {
  string s;
  cin >> s;
  int count1 = 0;
  int count2 = 0;
  bool check = 1;
  if (s.size() > 1) {
    for (int i = 0; i < s.size(); i++) {
      if(s[i] < 91) {
        ++count1;
      }
    }
    if(count1 == s.size()) {
      transform(s.begin(), s.end(), s.begin(), ::tolower); 
    }  
    for (int i = 1; i < s.size(); i++) {
      if(s[0] > 96) {
        if(s[i] < 91) {
          ++count2;
        } 
      }
    }
    if(count2 == s.size()-1) {
      transform(s.begin(), s.begin()+1, s.begin(), ::toupper);
      transform(s.begin()+1, s.end(), s.begin()+1, ::tolower);
    }
  }
  else {
    if (s[0] < 91) {
      transform(s.begin(), s.begin() + 1, s.begin(), ::tolower);
    }
    else {
      transform(s.begin(), s.begin() + 1, s.begin(), ::toupper);
    }
  }
  cout << s;
  return 0;
}