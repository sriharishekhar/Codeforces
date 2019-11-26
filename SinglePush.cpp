#include <iostream>

using namespace std;

void CheckEqual(int a[0], int b[0]) {

}

void SinglePush(int n) {
  int size;
  for (int i = 0; i < n; i++) {
    
    cout << "Enter Size of array" << endl;
    cin >> size;
    int a[size];
    int b[size];

    for (int j = 0; j < size; j++) {
      cin >> a[j];
    }
    for (int j = 0; j < size; j++) {
      cin >> b[j];
    }
    for (int j = 0; j < size; j++) {
      cout << a[j] << " ";
    }
    cout << endl;
    for (int j = 0; j < size; j++) {
      cout << b[j] << " ";
    }
    cout << endl;
  
    CheckEqual(&a, &b);
  }
}

int main() {
  int n;
  cout << "Enter # times" << endl;
  cin >> n;
  SinglePush(n);
  return 0;
}