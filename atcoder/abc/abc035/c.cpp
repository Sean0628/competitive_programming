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
  int n, q; cin >> n >> q;
  vector<int> d(n+1);

  rep(i, q) {
    int l, r; cin >> l >> r;
    l--; r--;
    d[l]++;
    d[r+1]--;
  }

  rep(i, n+1) {
    if (i > 0) d[i] += d[i-1];
  }

  string ans = "";
  rep(i, n) {
    if (d[i] % 2 == 0) ans += "0";
    else ans += "1";
  }

  out(ans);
  return 0;
}
