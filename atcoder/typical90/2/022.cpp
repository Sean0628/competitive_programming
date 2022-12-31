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
  ll a, b, c; cin >> a >> b >> c;
  ll r = gcd(gcd(a, b), c);
  cout << (a/r-1LL)+(b/r-1LL)+(c/r-1LL) << endl;
  return 0;
}
