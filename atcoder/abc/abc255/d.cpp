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
  int n, q; cin >> n >> q;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(a.begin(), a.end());

  vector<ll> sum(n + 1);
  sum[0] = 0;
  for (int i = 0; i < n; ++i) {
    sum[i + 1] = sum[i] + a[i];
  }

  rep(i, q) {
    ll k; cin >> k;
    int lpos = lower_bound(a.begin(), a.end(), k) - a.begin();

    ll ans = 0;
    ll m = 0;
    if (lpos > 0) m = sum[lpos] - sum[0];
    ans += abs(m - k*lpos);

    m = 0;
    int rpos = upper_bound(a.begin(), a.end(), k) - a.begin();
    if (rpos < n) m = sum[n] - sum[rpos];
    ans += abs(m - k*(n - rpos));

    out(ans);
  }
  return 0;
}
