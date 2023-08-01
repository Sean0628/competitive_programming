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

int op(int a, int b) { return a + b; }
int e() { return 0; }

int main() {
  int n, q; cin >> n >> q;
  segtree<int, op, e> seg(n);

  rep(i, q) {
    int c; cin >> c;
    if (c == 1) {
      int pos, x; cin >> pos >> x;
      pos--;
      seg.set(pos, x);
    } else {
      int l, r; cin >> l >> r;
      l--, r--;
      out(seg.prod(l, r));
    }
  }

  return 0;
}
