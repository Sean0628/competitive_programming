#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(int& a, int b) { a = max(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int mx = 0, mn = 1000000000;

  int n; cin >> n;
  rep(i, n) {
    int a; cin >> a;
    chmax(mx, a);
    chmin(mn, a);
  }

  out(mx - mn);
  return 0;
}
