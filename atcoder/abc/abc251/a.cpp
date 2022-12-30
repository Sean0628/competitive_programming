#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  string r = "";

  if (s.size() == 1) {
    r = s + s + s + s + s + s;
  } else if (s.size() == 2) {
    r = s + s + s;
  } else {
    r = s + s;
  }

  cout << r;
  return 0;
}
