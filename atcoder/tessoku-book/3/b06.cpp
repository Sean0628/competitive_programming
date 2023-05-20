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

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) {
    int x; cin >> x;
    if (x == 0) a[i] = -1;
    else a[i] = 1;
  }

  rep(i, n) {
    if (i != 0) a[i] += a[i-1];
  }

  int q; cin >> q;
  rep(i, q) {
    int l, r; cin >> l >> r;
    l--; r--;

    int m = a[r];
    if (l != 0) m -= a[l-1];

    if (m > 0) out("win");
    else if (m == 0) out("draw");
    else out("lose");
  }
  return 0;
}
