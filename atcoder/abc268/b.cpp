#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  string s, t; cin >> s >> t;

  if (s.size() <= t.size()) {
    bool ok = true;

    rep(i, s.size()) {
      if (s[i] == t[i]) continue;
      ok = false;
    }

    cout << (ok ? "Yes" : "No") << endl;
    return 0;
  } else cout << "No" << endl;

  return 0;
}
