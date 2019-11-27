/*
Question.
Bob watches TV every day. He always sets the volume of his TV to 𝑏. However, today he is angry to find out someone has changed the volume to 𝑎. 
Of course, Bob has a remote control that can change the volume.

There are six buttons (−5,−2,−1,+1,+2,+5) on the control, which in one press can either increase or decrease the current volume by 1, 2, or 5. 
The volume can be arbitrarily large, but can never be negative. In other words, Bob cannot press the button if it causes the volume to be lower than 0.

As Bob is so angry, he wants to change the volume to 𝑏 using as few button presses as possible. However, he forgets how to do such simple calculations, so he asks you for help. 
Write a program that given 𝑎 and 𝑏, finds the minimum number of presses to change the TV volume from 𝑎 to 𝑏.
*/

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int a, b;
    cin >> a >> b;
    if (a == b) {
      cout << "0" << endl;
      continue;
    }
    if (a > b) swap(a, b);
    int c = (b - a) / 5;
    int r = (b - a) % 5;
    switch (r) {
      case 0: break;
      case 1: c++; break;
      case 2: c++; break;
      case 3: c += 2; break;
      case 4: c += 2; break;
    }
    cout << c << endl;
  }
  return 0;
}