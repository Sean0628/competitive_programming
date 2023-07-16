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
  vector<int> p(n), c(n);
  vector<vector<int>> f(n, vector<int> (m));
  vector<set<int>> s(n);

  rep(i, n) {
    cin >> p[i] >> c[i];
    rep(j, c[i]) {
      cin >> f[i][j];
      s[i].insert(f[i][j]);
    }
  }

  auto solve = [&](int i, int j) {
    if (p[i] < p[j]) return false;
    rep(k, c[i]) {
      if (!s[j].count(f[i][k])) return false;
    }

    if (p[i] == p[j] && c[i] >= c[j]) return false;

    return true;
  };

  rep(i, n) {
    rep(j, n) {
      if (solve(i, j)) {
        out("Yes");
        return 0;
      }
    }
  }
  out("No");

  return 0;
}
