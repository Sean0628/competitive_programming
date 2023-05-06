#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<double, double>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, q; cin >> n >> q;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  sort(a.begin(), a.end());

  vector<ll> c(n);
  rep(i, n) c[i] = a[i] - i - 1;

  rep(i, q) {
    ll k; cin >> k;
    int pos = lower_bound(c.begin(), c.end(), k) - c.begin();

    if (pos == n) {
      out(a[n - 1] + k - c[n - 1]);
    } else {
      out(a[pos] - 1 - (c[pos] - k));
    }
  }

  return 0;
}
