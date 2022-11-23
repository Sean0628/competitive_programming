#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int MOD = 1e9 + 7;

ll power(ll a, ll b) {
  ll p = a, ans = 1;

  rep(i, 30) {
    if (b&(1<<i)) ans = ans * p % MOD;
    p = p*p%MOD;
  }

  return ans;
}

int main() {
  ll a, b; cin >> a >> b;

  cout << power(a, b) << endl;
  return 0;
}
