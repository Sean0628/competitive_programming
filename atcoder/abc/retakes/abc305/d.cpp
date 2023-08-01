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
  vector<ll> a(n); rep(i, n) cin >> a[i];
  vector<ll> sum(n+1);
  sum[0] = 0;
  rep(i, n) {
    if (i == 0) continue;
    if (i%2 == 0) sum[i+1] = sum[i] + (a[i] - a[i-1]);
    else sum[i+1] = sum[i];
  }

  int q; cin >> q;
  rep(i, q) {
    int l, r; cin >> l >> r;
    int lpos = lower_bound(a.begin(), a.end(), l) - a.begin();
    int rpos = lower_bound(a.begin(), a.end(), r) - a.begin();

    if (a[lpos] != l) lpos--;
    ll tot = 0;
    tot += sum[rpos+1] - sum[lpos+1];

    if (lpos%2 != 0) tot -= (l - a[lpos]);
    if (rpos%2 == 0) tot -= (a[rpos] - r);

    out(tot);
  }

  return 0;
}
