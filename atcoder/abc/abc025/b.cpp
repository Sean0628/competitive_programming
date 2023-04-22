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
  int n, a, b; cin >> n >> a >> b;

  int ans = 0;
  rep(i, n) {
    string s; int d; cin >> s >> d;
    if (s == "East") {
      if (d < a) ans += a;
      else if (d > b) ans += b;
      else ans += d;
    } else {
      if (d < a) ans -= a;
      else if (d > b) ans -= b;
      else ans -= d;
    }
  }

  if (ans > 0) {
    cout << "East " << ans << endl;
  } else if (ans < 0) {
    cout << "West " << -ans << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}
