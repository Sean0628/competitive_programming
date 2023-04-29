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
  int n, m; cin >> n >> m;

  rep(k, n+1) {
    int i = k - m + 3 * n;
    int j = m - 2 * n - 2 * k;

    if (i >= 0 && j >= 0) {
      printf("%d %d %d\n", i, j, k);
      return 0;
    }
  }

  printf("-1 -1 -1\n");
  return 0;
}
