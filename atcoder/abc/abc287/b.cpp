#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector<string> s(n), t(m);
  rep(i, n) cin >> s[i];
  rep(i, m) cin >> t[i];

  int cnt = 0;
  rep(i, n) {
    bool ok = false;
    rep(j, m) {
      if (s[i].substr(3, 6) == t[j]) ok = true;
    }

    if (ok) cnt++;
  }

  cout << cnt << endl;
  return 0;
}
