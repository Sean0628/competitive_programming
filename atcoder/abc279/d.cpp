#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll a, b; cin >> a >> b;
  ll l = 0, r = 1e13;

  auto f = [&](ll x) {
    double res = a/sqrt(1+x) + (double)x*b;
    return res;
  };

  while (l+3 <= r) {
    ll c1 = (l+r)/2;
    ll c2 = c1+1;
    if (f(c1) < f(c2)) r = c2; else l = c1;
  }

  double ans = min({f(l), f(l+1), f(r)});
  printf("%.10f\n", ans);

  return 0;
}
