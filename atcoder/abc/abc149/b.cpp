#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  ll a, b, k; cin >> a >> b >> k;

  if (a < k) {
    k -= a;
    a = 0LL;
    b -= k;
  } else {
    a -= k;
  }

  a = max(a, 0LL);
  b = max(b, 0LL);
  printf("%lld %lld", a, b);
  return 0;
}
