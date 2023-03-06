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
  int n, x; cin >> n >> x;
  vector<int> X(n);
  rep(i, n) cin >> X[i];

  X.emplace_back(x);

  sort(X.begin(), X.end());

  vector<int> d(n);
  rep(i, n) {
    d[i] = abs(X[i+1] - X[i]);
  }

  int ans = d[0];
  rep(i, n) ans = gcd(ans, d[i]);

  out(ans);
  return 0;
}
