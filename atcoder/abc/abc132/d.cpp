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

mint pt[4005][4005];

void init() {
  pt[0][0] = 1;
  rep(i, 4001) {
    rep(j, 4001) {
      pt[i+1][j] += pt[i][j];
      pt[i+1][j+1] += pt[i][j];
    }
  }
}

mint nCr(int n, int k) {
  return pt[n][k];
}

mint f2(int n, int k) {
  return nCr(n+k-1, k-1);
}

mint f(int n, int k) {
  if (n < k) return 0;
  if (n == 0 && k == 0) return 1;
  if (k < 1) return 0;

  return f2(n-k, k);
}

int main() {
  init();
  int n, k; cin >> n >> k;
  for (int i = 1; i <= k; ++i) {
    mint blue = f(k, i) ;
    mint red = f2(n-k-(i-1), i+1);
    mint ans = blue*red;
    printf("%d\n", ans.val());
  }
  return 0;
}
