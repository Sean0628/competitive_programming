#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll MOD = 1e9 + 7;

ll power(ll a, ll b) {
  ll p = a, ans = 1;
  rep(i, 60) {
    if (b&(1LL<<i)) ans = ans*p%MOD;
    p = p*p%MOD;
  }

  return ans;
}

ll ncr(ll n, ll r) {
  ll a = 1, b = 1;
  for (int i = n; i > 0; --i) a = a*i%MOD;

  for (int i = r; i > 0; --i) b = b*i%MOD;
  for (int i = n-r; i > 0; --i) b = b*i%MOD;

  return a*power(b, MOD-2)%MOD;
}

int main() {
  ll h, w; cin >> h >> w;
  cout << ncr(h+w-2, h-1) << endl;

  return 0;
}
