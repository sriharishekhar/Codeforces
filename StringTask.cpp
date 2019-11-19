/*
Q.
Petya started to attend programming lessons. On the first lesson his task was to write a simple program. 
The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. 
The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.
*/

#include <iostream>
#include <string>

using namespace std;

void StringTask(string s) {
  string ns;
  int j = 0;
  for (int i = 0; i < s.size(); i++) {
    if(s[i] != 'a' || 'e' || 'i' || 'o' || 'u') {
      ns[j++] = '.';
      ns[j++] = s[i];
    }
  }
  cout << ns << endl;
}

int main() {
  string s;  
  cout << "InputString" << endl;
  cin >> s;
  StringTask(s);
  return 0;
}