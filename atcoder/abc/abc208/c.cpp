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
  ll n, k; cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll b = k/n;
  k %= n;

  vector<int> c(a);
  sort(c.begin(), c.end());

  map<int, int> mp;

  rep(i, k) mp[c[i]]++;

  rep(i, n) {
    if (mp[a[i]] > 0) out(b+1);
    else out(b);
  }

  return 0;
}
