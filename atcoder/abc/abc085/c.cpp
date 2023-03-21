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
  int n, y; cin >> n >> y;

  rep(i, n+1) {
    rep(j, n+1-i) {
      int k = n-(i+j);
      if (i*10000 + j*5000 + k*1000 == y) {
        printf("%d %d %d\n", i, j, k);
        return 0;
      }
    }
  }

  printf("%d %d %d\n", -1, -1, -1);
  return 0;
}
