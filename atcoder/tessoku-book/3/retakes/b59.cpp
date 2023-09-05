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
void cyn(bool x) { cout << (x ? "First" : "Second") << endl; }

// sum
int op (int a, int b) { return a + b; }
// e
int e () { return 0; }

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) {
    cin >> a[i];
    a[i]--;
  }

  segtree<int, op, e> seg(n);

  ll ans = 0;
  rep(i, n) {
    ans += seg.prod(a[i], n);
    seg.set(a[i], 1);
  }

  out(ans);
  return 0;
}
