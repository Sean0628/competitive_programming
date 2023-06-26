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
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<ll> sum(n);
  for (int i = 1; i < n; ++i) {
    if (i%2 == 0) sum[i] = sum[i-1] + (a[i]-a[i-1]);
    else sum[i] = sum[i-1];
  }

  auto f = [&](int x) {
    int i = lower_bound(a.begin(), a.end(), x) - a.begin() - 1;
    if (i < 0) return 0;

    int res = sum[i];
    if (i%2 == 1) res += x - a[i];

    return res;
  };

  int q; cin >> q;
  rep(i, q) {
    int l, r; cin >> l >> r;
    out(f(r) - f(l));
  }

  return 0;
}
