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
  ll n; cin >> n;
  ll ans = 0;

  auto f = [](string a, string b) {
    int res = a.size();
    if (a.size() < b.size()) {
      res = b.size();
    }
    return res;
  };

  int mn = 1e9;
  for (ll i = 1; i*i <= n; i++) {
    if (n % i == 0) {
      ll a = i;
      ll b = n / i;
      int res = f(to_string(a), to_string(b));
      mn = min(mn, res);
    }
  }

  out(mn);

  return 0;
}
