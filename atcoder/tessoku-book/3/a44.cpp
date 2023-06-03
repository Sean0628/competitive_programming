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
  int n, q; cin >> n >> q;
  vector<int> a(n);
  rep(i, n) a[i] = i+1;

  bool rev = false;
  rep(i, q) {
    int c, x, y; cin >> c;
    if (c == 1) {
      cin >> x >> y;
      if (rev) x = n - x;
      else x--;

      a[x] = y;

    } else if (c == 2) {
      rev = !rev;
    } else {
      cin >> x;
      if (rev) x = n - x;
      else x--;

      out(a[x]);
    }
  }
  return 0;
}
