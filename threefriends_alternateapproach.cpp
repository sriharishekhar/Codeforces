/*
Three friends are going to meet each other. Initially, the first friend stays at the position 𝑥=𝑎, the second friend stays at the position 𝑥=𝑏 and the third friend stays at the position 𝑥=𝑐 on the coordinate axis 𝑂𝑥.
In one minute each friend independently from other friends can change the position 𝑥 by 1 to the left or by 1 to the right (i.e. set 𝑥:=𝑥−1 or 𝑥:=𝑥+1) or even don't change it.
Let's introduce the total pairwise distance — the sum of distances between each pair of friends. Let 𝑎′, 𝑏′ and 𝑐′ be the final positions of the first, the second and the third friend, correspondingly. 
Then the total pairwise distance is |𝑎′−𝑏′|+|𝑎′−𝑐′|+|𝑏′−𝑐′|, where |𝑥| is the absolute value of 𝑥.
Friends are interested in the minimum total pairwise distance they can reach if they will move optimally. Each friend will move no more than once. 
So, more formally, they want to know the minimum total pairwise distance they can reach after one minute.
You have to answer 𝑞 independent test cases.

Input
The first line of the input contains one integer 𝑞 (1≤𝑞≤1000) — the number of test cases.
The next 𝑞 lines describe test cases. The 𝑖-th test case is given as three integers 𝑎,𝑏 and 𝑐 (1≤𝑎,𝑏,𝑐≤109) — initial positions of the first, second and third friend correspondingly. 
The positions of friends can be equal.

Output
For each test case print the answer on it — the minimum total pairwise distance (the minimum sum of distances between each pair of friends) if friends change their positions optimally. 
Each friend will move no more than once. So, more formally, you have to find the minimum total pairwise distance they can reach after one minute.
*/

#include <iostream>

int main() {
  int n;
  std::cin >> n;
  int a[n], b[n], c[n];
  int moves[3] = {-1, 0, 1};
  for (int i = 0; i < n; i++) {
    std::cin >> a[i] >> b[i] >> c[i];
  }
  for (int i = 0; i < n; i++) {
    int min = -1;
    for (int j = 0; j < 3; ++j) {
      for (int k = 0; k < 3; ++k) {
        for (int l = 0; l < 3; ++l) {
          int x = a[i] + moves[j];
          int y = b[i] + moves[k];
          int z = c[i] + moves[l];
          int val = std::abs(x - y) + std::abs(x - z) + std::abs(y - z);
          if (min == -1) min = val;
          min = min > val ? val : min;
        }
      }
    }
    std::cout << min << std::endl;
  }
  return 0;
}
/*
CASES:
1.LLL
2.LL0
3.LLR

4.L0L
5.L00
6.L0R

7.LRL
8.LR0
9.LRR

10.0LL
11.0L0
12.0LR

13.00L
14.000
15.00R

16.0RL
17.0R0
18.0RR

19.RLL
20.RL0
21.RLR

22.R0L
23.R00
24.R0R

25.RRL
26.RR0
27.RRR
*/
