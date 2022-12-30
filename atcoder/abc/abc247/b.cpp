#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n;
  cin >> n;

  vector<string> s(n), t(n);
  rep(i, n) cin >> s[i] >> t[i];

  bool p = true;
  rep(i, n) {
    bool s_ok = true, t_ok = true;

    rep(j, n) {
      if (i == j) continue;
      if (s[i] == s[j] || s[i] == t[j]) s_ok = false;
    }

    rep(j, n) {
      if (i == j) continue;
      if (t[i] == s[j] || t[i] == t[j]) t_ok = false;
    }

    if (!s_ok && !t_ok) p = false;
  }

  cout << (p ? "Yes" : "No") << endl;

  return 0;
}
