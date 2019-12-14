/*
There are 𝑛 positive integers 𝑎1,𝑎2,…,𝑎𝑛. For the one move you can choose any even value 𝑐 and divide by two all elements that equal 𝑐.
For example, if 𝑎=[6,8,12,6,3,12] and you choose 𝑐=6, and 𝑎 is transformed into 𝑎=[3,8,12,3,3,12] after the move.
You need to find the minimal number of moves for transforming 𝑎 to an array of only odd integers (each element shouldn't be divisible by 2).

Input
The first line of the input contains one integer 𝑡 (1≤𝑡≤104) — the number of test cases in the input. Then 𝑡 test cases follow.
The first line of a test case contains 𝑛 (1≤𝑛≤2⋅105) — the number of integers in the sequence 𝑎. The second line contains positive integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤109).
The sum of 𝑛 for all test cases in the input doesn't exceed 2⋅105.

Output
For 𝑡 test cases print the answers in the order of test cases in the input. 
The answer for the test case is the minimal number of moves needed to make all numbers in the test case odd (i.e. not divisible by 2).
*/
#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; ++t) {
    int N;
    std::cin >> N;
    std::unordered_map<int, int> max_power;
    for (int n = 0; n < N; ++n) {
      int x;
      std::cin >> x;
      int two = 0;
      while (x != 0 and x % 2 == 0) {
        ++two;
        x /= 2;
      }
      if (two == 0) continue;
      if (max_power.find(x) == max_power.end()) max_power[x] = two;
      max_power[x] = std::max(max_power[x], two);
    }
    int total = 0;
    for (const auto& entry : max_power) {
      total += entry.second;
    }
    std::cout << total << std::endl;
  }
}