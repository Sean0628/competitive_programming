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

const int MOD = 998244353;
const int INV2 = 499122177;

int main() {
  ll n; cin >> n;

  ll res = 0;
  ll p10 = 10;

  // triangle number formula
  auto f = [](ll x) {
    x %= MOD;
    ll res = x;
    res *= x+1;
    res %= MOD;
    res *= INV2;
    res %= MOD;

    return res;
  };

  for (int i = 1; i <= 18; ++i) {
    ll l = p10/10;
    ll r = min(n, p10-1);

    if (l <= r) {
      res += f(r-l+1);
      res %= MOD;
    }

    p10 *= 10;
  }

  out(res);

  return 0;
}
