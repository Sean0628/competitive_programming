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
  vector<vector<int>> s(101, vector<int>(101, 0));

  int n; cin >> n;
  vector<int> a(n), b(n), c(n), d(n);
  rep(i, n) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    for (int j = a[i]; j < b[i]; j++) {
      for (int k = c[i]; k < d[i]; k++) {
        s[j][k]++;
      }
    }
  }

  int ans = 0;
  rep(i, 101) {
    rep(j, 101) {
      if (s[i][j] > 0) ans++;
    }
  }

  out(ans);
  return 0;
}
