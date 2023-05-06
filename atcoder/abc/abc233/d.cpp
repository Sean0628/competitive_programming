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
void cyn(bool x) { cout << (x ? "Takahashi" : "Aoki") << endl; }

int main() {
  ll n, k; cin >> n >> k;
  vector<ll> a(n);
  vector<ll> sum(n+1);
  ll cnt = 1;
  rep(i, n) cin >> a[i];
  sum[0] = 0;
  for (int i = 1; i <= n; ++i) {
    sum[i] = sum[i-1] + a[i-1];
  }

  map<ll, ll> mp;
  for (int r = 1; r <= n; ++r) {
    mp[sum[r-1]]++;
    cnt += mp[sum[r]-k];
  }

  out(cnt);

  return 0;
}
