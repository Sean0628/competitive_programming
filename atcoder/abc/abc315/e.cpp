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
  int n; cin >> n;
  vector<int> c(n);
  vector<vector<int>> p(n);

  rep(i, n) {
    cin >> c[i];
    p[i].resize(c[i]);
    rep(j, c[i]) { cin >> p[i][j]; p[i][j]--; }
  }

  vector<int> ans;
  vector<bool> read(n, false);
  auto dfs = [&](auto self, int v) -> void {
    if (read[v]) return;
    read[v] = true;

    if (c[v] == 0) {
      ans.push_back(v);
      return;
    }

    for (auto i : p[v]) {
      self(self, i);
    }
    ans.push_back(v);
  };

  for (auto i : p[0]) {
    dfs(dfs, i);
  }

  for (auto i : ans) cout << i+1 << " ";
  cout << endl;
  return 0;
}
