/*
Q.
"Contestant who earns a score equal to or greater than the k-th place finisher's score will advance to the next round, 
as long as the contestant earns a positive score..." — an excerpt from contest rules.

A total of n participants took part in the contest (n ≥ k), and you already know their scores. 
Calculate how many participants will advance to the next round.
*/

#include <iostream>
 
using namespace std;
 
void NextRound(int n, int k) {
  int a[n], count;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int j = k;
  while (a[k] == a[k+1]) {
    ++j;
  }
  cout << j + 1;
}
 
int main() {
  int n, k;
  cin >> n >> k;
  NextRound(n,k);
  return 0;
}

