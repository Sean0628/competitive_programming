#include <bits/stdc++.h>

using namespace std;

int main() {
  while (true) {
    int sum = 0;
    string s;
    getline(cin, s);

    if (s == "0") break;

    for (int i = 0; i < s.size(); ++i) {
      sum += s[i] - '0';
    }

    printf("%d\n", sum);
  }
  return 0;
}
