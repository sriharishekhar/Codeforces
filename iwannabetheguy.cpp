#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  int levels, n1;
  std::cin >> levels >> n1;
  std::vector<int> player1;
  for (int i = 0; i < n1; i++) {
    int a;
    std::cin >> a;
    player1.push_back(a);
  }
  int n2;
  std::cin >> n2;
  std::vector<int> player2;
  for (int i = 0; i < n2; i++) {
    int a;
    std::cin >> a;
    player2.push_back(a);
  }
  for (int i = 0; i < player2.size(); i++) {
    player1.push_back(player2[i]);
  }
  std::sort(player1.begin(), player1.end());
  auto position = std::unique(player1.begin(), player1.end());
  player1.erase(position, player1.end());
  if(player1.size() == levels) std::cout << "I become the guy." << std::endl;
  else std::cout << "Oh, my keyboard!" << std::endl;
  return 0;
}