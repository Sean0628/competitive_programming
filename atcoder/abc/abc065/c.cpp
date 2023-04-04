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
  int n, m; cin >> n >> m;

  if (n > m) swap(n, m);

  if (m-n > 1) {
    out(0);
    return 0;
  }

  mint ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= i;
  }
  for (int i = 1; i <= m; i++) {
    ans *= i;
  }

  if (n == m) ans *= 2;

  out(ans.val());

  return 0;
}
