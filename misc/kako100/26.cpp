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
  int n, q; cin >> n >> q;
  vector<vector<int>> to(n);
  rep(i, n-1) {
    int a, b; cin >> a >> b;
    a--; b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<int> ans(n, 0);
  auto dfs = [&](auto self, int idx, int p) -> void {
    for (int nv : to[idx]) {
      if (p == nv) continue;
      ans[nv] += ans[idx];
      self(self, nv, idx);
    }
  };

  rep(i, q) {
    int p, x; cin >> p >> x;
    p--;
    ans[p] += x;
  }

  dfs(dfs, 0, -1);

  rep(i, n) out(ans[i]);
  return 0;
}
