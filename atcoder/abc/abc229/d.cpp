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
  string s; cin >> s;
  ll k; cin >> k;
  ll n = s.size();

  vector<ll> sum(n+1);
  for (int i = 1; i <= n; ++i) {
    sum[i] = sum[i-1] + (s[i-1] == '.' ? 1 : 0);
  }

  int r = 0;

  ll ans = 0;
  rep(l, n) {
    while (r < n && sum[r+1] - sum[l] <= k) ++r;
    chmax(ans, r-l);
  }

  out(ans);
  return 0;
}
