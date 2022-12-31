#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b, c; cin >> a >> b >> c;

  auto f = [](ll x, ll y) {
    ll ret = 1;

    rep(i, y) ret *= x;

    return ret;
  };

  string ans = "No";
  if (a < f(c, b)) ans = "Yes";
  cout << ans << endl;
  return 0;
}
