#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> x(n);
  rep(i, n) cin >> x[i];

  ll ans = 1e10;
  for (int i = 1; i <= 100; ++i) {
    ll d = 0;
    rep(j, n) {
      d += (x[j] - i)*(x[j] - i);
    }
    chmin(ans, d);
  }
  cout << ans << endl;
  return 0;
}
