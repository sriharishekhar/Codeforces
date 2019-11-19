/*
Q.
Hanh lives in a shared apartment. There are 𝑛 people (including Hanh) living there, each has a private fridge.
𝑛 fridges are secured by several steel chains. Each steel chain connects two different fridges and is protected by a digital lock. 
The owner of a fridge knows passcodes of all chains connected to it. A fridge can be open only if all chains connected to it are unlocked. 
For example, if a fridge has no chains connected to it at all, then any of 𝑛 people can open it.
The weights of these fridges are 𝑎1,𝑎2,…,𝑎𝑛. To make a steel chain connecting fridges 𝑢 and 𝑣, you have to pay 𝑎𝑢+𝑎𝑣 dollars. 
Note that the landlord allows you to create multiple chains connecting the same pair of fridges.

Hanh's apartment landlord asks you to create exactly 𝑚 steel chains so that all fridges are private. 
A fridge is private if and only if, among 𝑛 people living in the apartment, only the owner can open it (i.e. no other person acting alone can do it). 
In other words, the fridge 𝑖 is not private if there exists the person 𝑗 (𝑖≠𝑗) that the person 𝑗 can open the fridge 𝑖.

For example, in the picture all the fridges are private. 
On the other hand, if there are 𝑛=2 fridges and only one chain (which connects them) then both fridges are not private (both fridges can be open not only by its owner but also by another person).

Of course, the landlord wants to minimize the total cost of all steel chains to fulfill his request. 
Determine whether there exists any way to make exactly 𝑚 chains, and if yes, output any solution that minimizes the total cost.
*/

#include <iostream>
#include <algorithm>
#include <vector>

int main() {
  int T;
  std::cin >> T;
  for (int i = 0; i < T; ++i) {
    int n, m;
    std::cin >> n >> m;
    std::vector<std::pair<int, int>> wts;
    int64_t total_wt = 0;
    for (int j = 0; j < n; ++j) {
      int w;
      std::cin >> w;
      total_wt += w;
      wts.push_back(std::make_pair(w, j));
    }
    std::sort(wts.begin(), wts.end());
    if (n == 2 || m < n) {
      std::cout << "-1" << std::endl;
      continue;
    }
    int64_t ans = total_wt * 2 + (n - m) * (wts[0].first + wts[1].first);
    std::cout << ans << std::endl;
    for (int j = 0; j < n; ++j) {
      int s = j + 1;
      int e = j + 2;
      if (e > n) e = 1;
      std::cout << s << " " << e << std::endl;
    }
    for (int j = 0; j < (n - m); ++j) {
      std::cout << wts[0].second << " " << wts[1].second << std::endl;
    }
  }
}