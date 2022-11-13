#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll MOD = 1e9 + 7;

ll powmod(ll x, ll y) {
  ll p = x, ans = 1;
  rep(i, 30) {
    int n = (1 << i);
    if ((y/n) % 2== 1) ans = (ans* p) % MOD;

    p = (p*p) % MOD;
  }

  return ans;
}

ll div(ll x, ll y, ll mod) {
  return (x * powmod(y, MOD-2)) % MOD;
}

ll ncr(int n, int r) {
  ll a = 1;
  for (int i = 1; i <= n; ++i) a = (a*i) % MOD;

  ll b = 1;
  for (int i = 1; i <= r; ++i) b = (b*i) % MOD;
  for (int i = 1; i <= n-r; ++i) b = (b*i) % MOD;

  return div(a, b, MOD);
}

int main() {
  ll h, w; cin >> h >> w;

  cout << ncr(h+w-2, w-1) << endl;
  return 0;
}
