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

  int ans = 1e9;
  rep(i, 1<<n) {
    int tmp = 1;
    rep(j, n) {
      if (i>>j&1) tmp *= 2;
      else tmp += k;
    }
    ans = min(ans, tmp);
  }

  out(ans);
  return 0;
}
