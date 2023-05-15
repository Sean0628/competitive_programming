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
  ll n, K; cin >> n >> K;
  vector<vector<ll>> a(n, vector<ll>(n, INT_MAX));
  rep(i, n) rep(j, n) {
    ll x; cin >> x;
    if (x == 1) a[i][j] = 1;
  }

  // Warshall-Floyd
  rep(k, n) rep(i, n) rep(j, n) {
    chmin(a[i][j], a[i][k] + a[k][j]);
  }

  int q; cin >> q;
  rep(i, q) {
    ll s, t; cin >> s >> t;
    s--; t--;

    s %= n, t %= n;

    if (a[s][t] == INT_MAX) out(-1);
    else out(a[s][t]);
  }
  return 0;
}
