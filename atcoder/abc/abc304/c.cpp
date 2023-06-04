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
  int n; double d; cin >> n >> d;

  vector<pair<double, double>> xy(n);

  rep(i, n) {
    double x, y; cin >> x >> y;
    xy[i] = make_pair(x, y);
  }

  vector<vector<int>> g(n);

  rep(i, n) {
    rep(j, n) {
      if (i == j) continue;
      double dist = sqrt(pow(xy[i].first-xy[j].first, 2) + pow(xy[i].second-xy[j].second, 2));
      if (dist <= d) {
        g[i].push_back(j);
      }
    }
  }

  vector<bool> ans(n, false);
  auto dfs = [&](auto self, int v) -> void {
    if (ans[v]) return;
    ans[v] = true;

    for (auto nv : g[v]) {
      self(self, nv);
    }
  };

  dfs(dfs, 0);

  rep(i, n) cyn(ans[i]);

  return 0;
}
