#include<iostream>
#include<vector>

int main() {
  //std::vector<std::vector<int> > v;
  int v[5][5];
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      int a;
      std::cin >> a;
      v[i][j] = a;
    }
  }
  int colpos, rowpos;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if(v[i][j] == 1) {
        rowpos = i;
        colpos = j;
      }
    }
  }
  int count = 0;
  if(rowpos < 2) {
    while (rowpos < 2) {
      ++rowpos;
      ++count;
    }
  }
  if(rowpos > 2) {  
    while (rowpos > 2) {
      --rowpos;
      ++count;
    }
  }  
  if(colpos < 2) {
    while (colpos < 2) {
      ++colpos;
      ++count;
    }
  }  
  if(colpos > 2) {
    while (colpos > 2) {
      --colpos;
      ++count;
    }
  }  
  std::cout << count;
  return 0;
}