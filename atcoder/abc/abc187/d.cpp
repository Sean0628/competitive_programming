#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<ll, ll>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  ll tot = 0;
  vector<ll> a(n);
  rep(i, n) {
    ll x, y; cin >> x >> y;
    tot -= x;
    a[i] = x + x + y;
  }

  sort(a.begin(), a.end());
  ll ans = 0;
  while (tot <= 0) {
    tot += a.back();
    a.pop_back();
    ans++;
  }

  out(ans);

  return 0;
}
