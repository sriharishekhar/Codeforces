#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int v[n][3];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      int a;
      std::cin >> a;
      v[i][j] = a;
    }
  }
  int sum[3] = {0};
  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < n; i++) {
      sum[j] += v[i][j];
    }
  } 
  bool flag = 1;
  for (int i = 0; i < 3; i++) {
    if(sum[i] != 0) flag = 0;
  }
  if(flag == 1) std::cout << "YES";
  else std::cout << "NO";
  return 0;
}
