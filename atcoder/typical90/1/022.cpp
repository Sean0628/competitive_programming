#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

ll gcd(ll a, ll b) {
  if (b == 0) return a;

  return gcd(b, a%b);
}

int main() {
  ll a, b, c; cin >> a >> b >> c;
  ll s = gcd(a, gcd(b, c));
  cout << (a/s-1LL) + (b/s-1LL) + (c/s-1LL) << endl;
  return 0;
}
