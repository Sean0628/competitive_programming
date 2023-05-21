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
  int n, k; cin >> n >> k;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  vector<ll> b(1<<(n/2)), c(1<<(n-n/2));

  rep(i, 1<<(n/2)) {
    ll sum = 0;

    rep(j, n/2) {
      if (i>>j&1) sum += a[j];
    }
    b[i] = sum;
  }

  rep(i, 1<<(n-n/2)) {
    ll sum = 0;

    rep(j, n-n/2) {
      if (i>>j&1) sum += a[j+n/2];
    }
    c[i] = sum;
  }

  bool ok = false;

  sort(c.begin(), c.end());

  rep(i, 1<<(n/2)) {
    if (k < b[i]) continue;
    if (binary_search(c.begin(), c.end(), k-b[i])) ok = true;
  }

  cyn(ok);

  return 0;
}
