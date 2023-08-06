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
  ll tot = 0;
  vector<ll> a(n);
  rep(i, n) {
    cin >> a[i];
    tot += a[i];
  }

  ll  x = tot/n, r = tot%n;
  vector<ll> b(n, x);
  rep(i, r) b[i]++;

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ll ans = 0;
  rep(i, n) ans += abs(a[i] - b[i]);
  out(ans/2);
  return 0;
}
