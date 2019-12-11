#include <iostream>
#include <vector>

int main() {
  int n;
  std::cin >> n;
  std::vector<int> presents;
  std::vector<int> sequence(n);
  for (int i = 0; i < n; i++) {
    int a;
    std::cin >> a;
    presents.push_back(a);
  }
  for (int i = 0; i < presents.size(); i++) {
    int position = presents[i] - 1;
    sequence[position] = i + 1;
  }
  for (int i = 0; i < sequence.size(); i++) {
    std::cout << sequence[i] << " ";
  }
  return 0;
}
