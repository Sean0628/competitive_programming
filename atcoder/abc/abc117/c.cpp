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
  vector<int> x(m), y(m);
  rep(i, m) cin >> x[i];

  sort(x.rbegin(), x.rend());
  rep(i, m-1) y[i] = abs(x[i]-x[i+1]);

  sort(y.rbegin(), y.rend());

  ll ans = 0;
  rep(i, m) {
    if (i < n-1) continue;

    ans += y[i];
  }

  out(ans);

  return 0;
}
