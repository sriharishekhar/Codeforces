#include <iostream>
#include <string>

int main() {
  std::string p;
  std::cin >> p;
  bool language = 0;
  for (int i = 0; i < p.size(); i++) {
    if(p[i] == 'H') language = 1;
    else if(p[i] == 'Q') language = 1;
    else if(p[i] == '9') language = 1;
  }
  if(language == 1) std::cout << "YES";
  else std::cout << "NO";
  return 0;
}