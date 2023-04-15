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
  vector<int> a(n, 0);

  rep(i, q) {
    int l, r, t; cin >> l >> r >> t;
    l--; r--;

    for (int j = l; j <= r; j++) {
      a[j] = t;
    }
  }

  rep(i, n) cout << a[i] << endl;
  return 0;
}
