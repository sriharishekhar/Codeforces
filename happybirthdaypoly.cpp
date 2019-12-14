/*
Hooray! Polycarp turned 𝑛 years old! The Technocup Team sincerely congratulates Polycarp!
Polycarp celebrated all of his 𝑛 birthdays: from the 1-th to the 𝑛-th. At the moment, he is wondering: how many times he turned beautiful number of years?
According to Polycarp, a positive integer is beautiful if it consists of only one digit repeated one or more times. 
For example, the following numbers are beautiful: 1, 77, 777, 44 and 999999. The following numbers are not beautiful: 12, 11110, 6969 and 987654321.
Of course, Polycarpus uses the decimal numeral system (i.e. radix is 10).
Help Polycarpus to find the number of numbers from 1 to 𝑛 (inclusive) that are beautiful.

Input
The first line contains an integer 𝑡 (1≤𝑡≤104) — the number of test cases in the input. Then 𝑡 test cases follow.
Each test case consists of one line, which contains a positive integer 𝑛 (1≤𝑛≤109) — how many years Polycarp has turned.

Output
Print 𝑡 integers — the answers to the given test cases in the order they are written in the test. 
Each answer is an integer: the number of beautiful years between 1 and 𝑛, inclusive.
*/
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<int> v;
  for (int i = 1; i < 10; i++) {
    int a = 0;
    int tens = i;
    for (int j = 1; j < 10; j++) {
      a = a + tens;
      v.push_back(a);
      tens = tens*10;
    }
  }
  int n;
  std::cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    std::cin >> a[i];
  }
  std::sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    int count = 0;
    for (int j = 0; j < 81; j++) {
      if(a[i] >= v[j]) ++count;
    }
    std::cout << count << std::endl;
  }
  return 0;
}