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
  ll n; cin >> n;
  vector<ll> sum(n+1), mx(n+1);
  rep(i, n) {
    ll a; cin >> a;
    sum[i+1] = sum[i] + a;
    mx[i+1] = max(mx[i], sum[i+1]);
  }

  ll now = 0, ans = 0;

  for (int i = 1; i <= n; i++) {
    chmax(ans, now + mx[i-1]);
    now += sum[i];
  }

  chmax(ans, now);

  out(ans);
  return 0;
}
