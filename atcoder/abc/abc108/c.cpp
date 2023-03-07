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
  int n, k; cin >> n >> k;
  ll ans = 0;

  int m0 = 0;
  for (int i = 1; i <= n; ++i) {
    if (i%k == 0) m0++;
  }

  ans = 1LL * m0 * m0 * m0;

  if (k%2 == 0) {
    int c = 0;
    for (int i = 1; i <= n; ++i) {
      if (i%k == k/2) c++;
    }

    ans += 1LL * c * c * c;
  }

  out(ans);
  return 0;
}
