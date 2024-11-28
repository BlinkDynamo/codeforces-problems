#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
  
  string line;

  getline(cin, line);
  
  char c;
  int index = 0; 
  for (auto it = line.begin(); it < line.end(); ++it, ++index) {
    cout << index << *it;
  }

  return 0;
}
