#include <iostream>
using namespace std;

int main() {
string s;
cin >> s;
int count = 0;
bool check = 0;

for (int i = 0; i < s.size(); i++) {
  if(s[i] == '4') {
    ++count;
  }
  else if(s[i] == '7') {
    ++count;
  }
}
int arr[13] = {4, 7, 47, 74, 44, 444, 447, 474, 477, 744, 747, 774, 777};
for (int i = 0; i < 13; i++) {
  if(count != 0) {  
    if(count == arr[i]) {
      check = true;
    }
  }
}
if(check == true)
  cout << "YES";
else
  cout << "NO";   
return 0;
}