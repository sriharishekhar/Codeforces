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

    //case1
    x = a[i];
    y = b[i];
    z = c[i];
    x -= 1;
    y -= 1;
    z -= 1;
    min = abs(x - y) + abs(x - z) + abs(y - z);

    //case2
    x = a[i];
    y = b[i];
    z = c[i];
    x -= 1;
    y -= 1;
    //z -= 1;
    if(min > (abs(x - y) + abs(x - z) + abs(y - z)))
      min = abs(x - y) + abs(x - z) + abs(y - z);

    //case3
    x = a[i];
    y = b[i];
    z = c[i];
    x -= 1;
    y -= 1;
    z += 1;
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
