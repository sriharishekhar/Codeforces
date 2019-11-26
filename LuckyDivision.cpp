#include <iostream>
using namespace std;

int main() {
int n;
cin >> n;
bool check = 0;
int arr[13] = {4, 7, 47, 74, 44, 444, 447, 474, 477, 744, 747, 774, 777};
  for (int i = 0; i < 13; i++) {
    if(n%arr[i] == 0) {
      check = true;
    }
  }
 if(check == true)
   cout << "YES";
 else
   cout << "NO";
return 0;
}