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
void cyn(bool x) { cout << (x ? "First" : "Second") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<ll> cnt(100);
  for (int i = 1; i <= n; ++i) cnt[a[i-1]%100] += 1;

  ll ans = 0;
  for (int i = 1; i < 50; ++i) ans += cnt[i] * cnt[100-i];
  ans += cnt[0] * (cnt[0] - 1LL) / 2LL;
  ans += cnt[50] * (cnt[50] - 1LL) / 2LL;

  out(ans);

  return 0;
}
