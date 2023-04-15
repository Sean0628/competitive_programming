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
  int n, k; cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  ll ans = 0;

  int r = k-1;
  ll sum = 0;

  for (int i = 0; i <= r; ++i) {
    sum += a[i];
  }

  rep(l, n-k+1) {
    ans += sum;

    sum -= a[l];
    r = min(r+1, n-1);
    sum += a[r];
  }

  out(ans);

  return 0;
}
