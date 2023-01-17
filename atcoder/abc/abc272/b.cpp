#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  int n, m; cin >> n >> m;

  vector<vector<bool>> vec(n+1, vector<bool> (n+1));
  rep(i, m) {
    int k; cin >> k;
    vector<int> x(k);
    rep(j, k) cin >> x[j];

    rep(j, k) {
      rep(l, k) {
        if (j == l) continue;

        vec[x[j]][x[l]] = true;
        vec[x[l]][x[j]] = true;
      }
    }
  }

  bool ok = true;

  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= n; ++j) {
      if (i == j) continue;

      if (!vec[i][j]) ok = false;
    }
  }
  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
