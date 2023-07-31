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
  ll n; cin >> n;

  vector<ll> pow10(18);
  pow10[0] = 1;
  for (int i = 1; i < 18; ++i) pow10[i] = pow10[i-1]*10;

  vector r(15, vector<ll>(10));
  rep(i, 15) {
    ll digit = (n/pow10[i])%10;

    rep(j, 10) {
      if (j < digit) r[i][j] = (n/pow10[i+1]) * pow10[i] + pow10[i];
      else if (j == digit) r[i][j] = (n/pow10[i+1]) * pow10[i] + (n%pow10[i]) + 1;
      else r[i][j] = (n/pow10[i+1]) * pow10[i];
    }
  }

  ll ans = 0;
  rep(i, 15) {
    rep(j, 10) {
      ans += r[i][j]*j;
    }
  }

  out(ans);
  return 0;
}
