#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s;
  cin >> s;

  int ans = 3;
  if (s[0] == s[1] && s[0] == s[2]) ans = 1;
  else if (s[0] != s[1] && s[0] != s[2] && s[1] != s[2]) ans = 6;

  cout << ans << endl;
  return 0;
}
