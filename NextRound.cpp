/*
Q.
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, 
as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. 
Calculate how many participants will advance to the next round.
*/

#include <iostream>
#include <vector>
 
int main() {
  int n, k;
  std::cin >> n >> k;
  std::vector<int> v;
  for (int i = 0; i < n; i++) {
    int a;
    std::cin >> a;
    v.push_back(a);
  }
  int compare = v[k-1];
  int count = 0;
  for (int i = 0; i < n; i++) {
    if(v[i] >= compare && v[i] > 0) ++count;
  }
  std::cout << count;
  return 0;
}

