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
  int n; cin >> n;
  ll k; cin >> k;
  vector<pair<ll, ll>> a(n);
  rep(i, n) cin >> a[i].first >> a[i].second;

  sort(a.begin(), a.end());
  rep(i, n) {
    if (a[i].first > k) break;
    k += a[i].second;
  }

  out(k);
  return 0;
}
