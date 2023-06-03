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

ll nCr(ll n, ll r) {
  ll res = 1;
  for (ll i = 1; i <= r; ++i) {
    res *= n - i + 1;
    res /= i;
  }

  return res;
}

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  map<int, int> mp;
  rep(i, n) mp[a[i]]++;

  ll ans = 0;
  for (auto p : mp) {
    if (p.second >= 3) {
      ans += nCr(p.second, 3);
    }
  }

  out(ans);


  return 0;
}
