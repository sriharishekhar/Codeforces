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
  for (int i = 0; i < n; i++) {
    std::cin >> a[i] >> b[i] >> c[i];
  }
  int min = 0;
  for (int i = 0; i < n; i++) {
    int x, y, z;

    //left => move one unit to the left i.e (-1)
    //right => move one unit to the right i.e (+1)

    //case1
    x = a[i];   //initializing values of x as a[i] 
    y = b[i];   //initializing values of x as b[i]
    z = c[i];   //initializing values of x as c[i]
    x -= 1;     //move x to the left
    y -= 1;     //move y to the left
    z -= 1;     //move z to the left
    min = abs(x - y) + abs(x - z) + abs(y - z);

    //case2
    x = a[i];   
    y = b[i];
    z = c[i];
    x -= 1;     
    y -= 1;
    //z -= 1;   //z stays where it is
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case3
    x = a[i];
    y = b[i];
    z = c[i];
    x -= 1;
    y -= 1;
    z += 1;     //z moves on unit to the right
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case4
    x = a[i];
    y = b[i];
    z = c[i];
    x -= 1;
    //y -= 1;
    z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case5
    x = a[i];
    y = b[i];
    z = c[i];
    x -= 1;
    //y -= 1;
    //z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case6
    x = a[i];
    y = b[i];
    z = c[i];
    x -= 1;
    //y -= 1;
    z += 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case7
    x = a[i];
    y = b[i];
    z = c[i];
    x -= 1;
    y += 1;
    z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case8
    x = a[i];
    y = b[i];
    z = c[i];
    x -= 1;
    y += 1;
    //z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case9
    x = a[i];
    y = b[i];
    z = c[i];
    x -= 1;
    y += 1;
    z += 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case10
    x = a[i];
    y = b[i];
    z = c[i];
    //x -= 1;
    y -= 1;
    z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case11
    x = a[i];
    y = b[i];
    z = c[i];
    //x -= 1;
    y -= 1;
    //z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case12
    x = a[i];
    y = b[i];
    z = c[i];
    //x -= 1;
    y -= 1;
    z += 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case13
    x = a[i];
    y = b[i];
    z = c[i];
    //x -= 1;
    //y -= 1;
    z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case14
    x = a[i];
    y = b[i];
    z = c[i];
    //x -= 1;
    //y -= 1;
    //z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case15
    x = a[i];
    y = b[i];
    z = c[i];
    //x -= 1;
    //y -= 1;
    z += 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case16
    x = a[i];
    y = b[i];
    z = c[i];
    //x -= 1;
    y += 1;
    z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case17
    x = a[i];
    y = b[i];
    z = c[i];
    //x -= 1;
    y += 1;
    //z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case18
    x = a[i];
    y = b[i];
    z = c[i];
    //x -= 1;
    y += 1;
    z += 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case19
    x = a[i];
    y = b[i];
    z = c[i];
    x += 1;
    y -= 1;
    z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case20
    x = a[i];
    y = b[i];
    z = c[i];
    x += 1;
    y -= 1;
    //z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case21
    x = a[i];
    y = b[i];
    z = c[i];
    x += 1;
    y -= 1;
    z += 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case22
    x = a[i];
    y = b[i];
    z = c[i];
    x += 1;
    //y -= 1;
    z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case23
    x = a[i];
    y = b[i];
    z = c[i];
    x += 1;
    //y -= 1;
    //z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case24
    x = a[i];
    y = b[i];
    z = c[i];
    x += 1;
    //y -= 1;
    z += 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case25
    x = a[i];
    y = b[i];
    z = c[i];
    x += 1;
    y += 1;
    z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case26
    x = a[i];
    y = b[i];
    z = c[i];
    x += 1;
    y += 1;
    //z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case27
    x = a[i];
    y = b[i];
    z = c[i];
    x += 1;
    y += 1;
    z += 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

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
