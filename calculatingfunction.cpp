#include <iostream>

int main()
{
    long long n, a;
    std::cin >> n;
    if(n % 2 == 0) a = n / 2;
    else a = ((n + 1) / 2) * (-1);
    std::cout << a << std::endl;
    return 0;
}

/*
#5
-1-3-5 | +2+4 = -9+6 = -3
#7
-1-3-5-7 | +2+4+6 = -16+12 = -4
#9
-1-3-5-7-9 | +2+4+6+8 = -25+20 = -5
#11
-1-3-5-7-9-11 | +2+4+6+8+10 = -36+30 = -6
A.P = (n+1 / 2) (-1)
*/