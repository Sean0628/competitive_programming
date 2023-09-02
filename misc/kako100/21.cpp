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

const ll INF = 1e18;

int main() {
  int n; cin >> n;
  vector<ll> h(n), s(n);
  rep(i, n) cin >> h[i] >> s[i];

  ll l = 0, r = INF;

  while (l < r) {
    ll mid = (l+r)/2;

    vector<ll> lim(n);
    rep(i, n) lim[i] = (mid-h[i]+s[i])/s[i]-1;
    sort(lim.begin(), lim.end());
    bool ok = true;
    rep(i, n) if (lim[i] < i) ok = false;

    if (ok) r = mid;
    else l = mid+1;
  }

  out(l);
  return 0;
}
