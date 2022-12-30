#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s; cin >> s;

  bool ok = false;
  int os = s.size();
  rep(i, os) {
    bool f = true;

    rep(j, s.size()) {
      int k = s.size() - 1 - j;
      if (j >= k) break;
      if (s[j] == s[k]) continue;
      else f = false;
    }

    if (f) {
      ok = true;
      break;
    } else s = "0" + s;
  }

  cout << (ok ? "Yes" : "No") << endl;

  return 0;
}
