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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int MOD = 10'000;

int main() {
  int n; cin >> n;
  int ans = 0;
  rep(i, n) {
    char c; cin >> c;
    int a; cin >> a;

    if (c == '+') ans += a;
    else if (c == '-') {
      ans -= a;
      if (ans < 0) ans += MOD;
    } else if (c == '*') ans *= a;

    ans %= MOD;

    out(ans);
  }

  return 0;
}
