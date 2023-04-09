
#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  ll tot = 0;

  ll a, b; cin >> a >> b;
  ll g = gcd(a, b);

  auto f = [&](auto f, ll x, ll y) {
    if (x < y) swap(x, y);
    if (y == 0) return 0;

    tot += x/y;
    f(f, y, x%y);

    return 0;
  };

  f(f, a, b);
  out(tot-1);
  return 0;
}

