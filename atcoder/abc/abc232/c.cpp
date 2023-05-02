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
void cyn(bool x) { cout << (x ? "Takahashi" : "Aoki") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector x(n, vector<bool>(n)), y(n, vector<bool>(n));

  rep(i, m) {
    int a, b; cin >> a >> b;
    a--; b--;
    x[a][b] = x[b][a] = true;
  }

  rep(i, m) {
    int c, d; cin >> c >> d;
    c--; d--;
    y[c][d] = y[d][c] = true;
  }

  vector<int> p(n);
  iota(p.begin(), p.end(), 0);

  do {
    bool ok = true;
    rep(i, n) {
      rep(j, n) {
        if (x[i][j] != y[p[i]][p[j]]) ok = false;
      }
    }

    if (ok) { out("Yes"); return 0; }

  } while (next_permutation(p.begin(), p.end()));

  out("No");
  return 0;
}
