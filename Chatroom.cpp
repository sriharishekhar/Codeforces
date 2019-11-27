#include <iostream>
using namespace std;

string s1, s2 = "hello";
int k = 0, pass = 0;
int main() {
    cin >> s1;
    for (int i = 0; i < s1.size(); i++) {
        if (s1[i] == s2[k]) {
            k++;
            pass++;
            
            if (pass == 5) {
                break;
            }
        }
    }
    if (pass == 5) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}