#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> to(n);
  rep(i, n-1) {
    int p; cin >> p;
    p--;
    to[p].push_back(i+1);
  }

  vector<int> s(n, 0);
  rep(i, m) {
    int x, y; cin >> x >> y;
    x--;
    chmax(s[x], y+1);
  }

  vector<bool> ok(n, false);
  auto dfs = [&](auto self, int v, int rem) -> void {
    if (rem > 0) ok[v] = true;

    for (auto nv : to[v]) {
      int nrem = max(rem-1, s[nv]);
      self(self, nv, nrem);
    }
  };

  dfs(dfs, 0, s[0]);

  int ans = 0;
  rep(i, n) if (ok[i]) ans++;

  out(ans);

  return 0;
}
