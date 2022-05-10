#include <bits/stdc++.h>

using namespace std;

int main() {
  string p, s;

  getline(cin, s);
  getline(cin, p);

  s = s + s;

  if (s.find(p) != string::npos) {
     printf("%s\n", "Yes");
  } else {
     printf("%s\n", "No");
  }

  return 0;
}
