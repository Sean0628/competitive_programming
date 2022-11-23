#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

ll gcd(ll a, ll b) {
  if (b == 0) return a;

  return gcd(b, a%b);
}

int main() {
  ll a, b; cin >> a >> b;

  ll ans = a*b/gcd(a, b);

  cout << ans << endl;

  return 0;
}
