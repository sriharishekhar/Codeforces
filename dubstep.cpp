#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;
  bool removed = 0;
  while (removed == 0) {
    here1:
    int i = 0;
    for (int i = 0; i < s.size(); i++) {
      if(s[i] == 'W') {
        if(s[i + 1] == 'U') {
          if(s[i + 2] == 'B') {
            s[i + 2] = ' ';
            s.erase(i, 2);
            goto here1;
          }
        }
      }
      if(i == s.size() - 1) removed = 1;
    }
  }  
  here2:
  int j = 0;
  for (int j = 0; j < s.size(); j++) {
    if(s[j] == ' ') {
      if(s[j+1] == ' ') {
        s.erase(j, 1);
        goto here2;
      }
    }
  }
  if(s[0] == ' ') s.erase(0, 1);
  if(s[s.size() - 1] == ' ') s.erase(s.size() - 1, 1);
  std::cout << s;
  return 0;
}