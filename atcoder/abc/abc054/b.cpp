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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector<string> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  rep(i, n - m + 1) {
    rep(j, n - m + 1) {
      bool ok = true;
      rep(k, m) {
        rep(l, m) {
          if (a[i + k][j + l] != b[k][l]) ok = false;
        }
      }
      if (ok) {
        out("Yes");
        return 0;
      }
    }
  }

  out("No");

  return 0;
}
