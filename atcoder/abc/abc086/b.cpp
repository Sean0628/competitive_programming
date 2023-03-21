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
  string a, b; cin >> a >> b;
  a += b;

  auto f = [](string t) {
    int res = 0;
    rep(i, t.size()) {
      res *= 10;
      res += t[i] - '0';
    }

    return res;
  };

  int n = f(a);
  double m = sqrt(n);

  cyn((int)m*m == n);
  return 0;
}
