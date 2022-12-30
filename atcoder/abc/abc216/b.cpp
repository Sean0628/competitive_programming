#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;

  vector<string> s(n), t(n);
  rep(i, n) cin >> s[i] >> t[i];

  string ans = "No";

  rep(i, n) {
    rep(j, n) {
      if (i == j) continue;
      if (s[i] == s[j] && t[i] == t[j]) ans = "Yes";
    }
  }

  cout << ans << endl;
  return 0;
}
