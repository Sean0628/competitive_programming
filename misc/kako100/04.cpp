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
  vector<vector<ll>> a(n, vector<ll>(m));
  rep(i, n) rep(j, m) cin >> a[i][j];

  ll ans = 0;
  rep(i, m) {
    for (int j = i+1; j < m; j++) {
      ll sum = 0;
      rep(k, n) {
        sum += max(a[k][i], a[k][j]);
      }
      chmax(ans, sum);
    }
  }

  out(ans);
  return 0;
}
