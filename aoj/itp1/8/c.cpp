#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int wc[26] = {};

  while (true) {
    getline(cin, s);
    if (!s.length()) break;

    for (int i = 0; i < s.length(); ++i) {
      char c = tolower(s[i]);

      if (c >= 'a' && c <= 'z') wc[c - 'a']++;
    }
  }

  for (int i = 0; i < 26; ++i) {
    printf("%c : %d\n", 'a' + i, wc[i]);
  }

  return 0;
}
