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
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  bool ok = false;

  auto dfs = [&](auto self, int idx, string t, vector<bool> visited, int c) {
    visited[idx] = true;

    if (c == n) {
      ok = true;
      return;
    }

    rep(i, n) {
      if (visited[i]) continue;

      int d = 0;
      rep(j, m) if (s[i][j] != t[j]) d++;

      if (d == 1) self(self, i, s[i], visited, c+1);
    }

    return;
  };

  rep(i, n) {
    string t = s[i];
    vector<bool> visited(n);

    dfs(dfs, i, t, visited, 1);
  }

  cyn(ok);
  return 0;
}
