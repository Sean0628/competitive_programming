#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t; cin >> s >> t;
  bool ok = true;

  if (s.size()+1 != t.size()) ok = false;
  rep(i, s.size()) {
    if (s[i] != t[i]) ok = false;
  }

  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
