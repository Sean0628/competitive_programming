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

ll factorial(ll n, int p) {
  if (n == 0) return 0;

  return n/p + factorial(n/p, p);
}

ll doubleFactorial(ll n, int p) {
  if (n%2 == 1) return factorial(n, p) - doubleFactorial(n-1, p);

  ll res = factorial(n/2, p);
  if (p == 2) res += n/2;
  return res;
}

int main() {
  ll n; cin >> n;
  ll ans = min(doubleFactorial(n, 2), doubleFactorial(n, 5));
  cout << ans << endl;
  return 0;
}
