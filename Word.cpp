#include <iostream>
#include <string>
#include <algorithm>


using namespace std;

int main() {
  string s;
  cin >> s;
  int cntlow = 0;
  int cntupp = 0;
  for (int i = 0; i < s.size(); i++) {
    if(s[i] > 96) {
      ++cntlow;
    }
    else {
      ++cntupp;
    }
  }
  if(cntlow > cntupp) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
  else if(cntlow == cntupp) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
  }
  else {
    transform(s.begin(), s.end(), s.begin(), ::toupper);
  }
  cout << s << endl;
  return 0;
}  
