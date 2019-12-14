/*
You are given a non-empty string 𝑠=𝑠1𝑠2…𝑠𝑛, which consists only of lowercase Latin letters. 
Polycarp does not like a string if it contains at least one string "one" or at least one string "two" (or both at the same time) as a substring. 
In other words, Polycarp does not like the string 𝑠 if there is an integer 𝑗 (1≤𝑗≤𝑛−2), that 𝑠𝑗𝑠𝑗+1𝑠𝑗+2="one" or 𝑠𝑗𝑠𝑗+1𝑠𝑗+2="two".

For example:
Polycarp does not like strings "oneee", "ontwow", "twone" and "oneonetwo" (they all have at least one substring "one" or "two"),
Polycarp likes strings "oonnee", "twwwo" and "twnoe" (they have no substrings "one" and "two").
Polycarp wants to select a certain set of indices (positions) and remove all letters on these positions. All removals are made at the same time.
For example, if the string looks like 𝑠="onetwone", then if Polycarp selects two indices 3 and 6, then "onetwone" will be selected and the result is "ontwne".
What is the minimum number of indices (positions) that Polycarp needs to select to make the string liked? What should these positions be?

Input
The first line of the input contains an integer 𝑡 (1≤𝑡≤104) — the number of test cases in the input. Next, the test cases are given.
Each test case consists of one non-empty string 𝑠. Its length does not exceed 1.5⋅105. The string 𝑠 consists only of lowercase Latin letters.
It is guaranteed that the sum of lengths of all lines for all input data in the test does not exceed 1.5⋅106.

Output
Print an answer for each test case in the input in order of their appearance.
The first line of each answer should contain 𝑟 (0≤𝑟≤|𝑠|) — the required minimum number of positions to be removed, where |𝑠| is the length of the given line. 
The second line of each answer should contain 𝑟 different integers — the indices themselves for removal in any order. 
Indices are numbered from left to right from 1 to the length of the string. 
If 𝑟=0, then the second line can be skipped (or you can print empty). If there are several answers, print any of them.
*/
#include <iostream>
#include <string>
#include <vector>

int main() {
  int N;
  std::cin >> N;
  for (int i = 0; i < N; ++i) {
    std::string s;
    std::cin >> s;
    std::vector<int> indices;
    for (int j = 0; j < s.size();) {
      if (j + 5 <= s.size() and s.substr(j, 5) == "twone") {
        indices.push_back(j + 3);
        j += 5;
      } else if (j + 3 <= s.size() and s.substr(j, 3) == "two") {
        indices.push_back(j + 2);
        j += 3;
      } else if (j + 3 <= s.size() and s.substr(j, 3) == "one") {
        indices.push_back(j + 2);
        j += 3;
      } else {
        ++j;
      }
    }
    std::cout << indices.size() << std::endl;
    for (int i = 0; i < indices.size(); ++i) {
      std::cout << indices[i];
      if (i != indices.size() - 1) std::cout << " ";
    }
    std::cout << std::endl;
  }
}