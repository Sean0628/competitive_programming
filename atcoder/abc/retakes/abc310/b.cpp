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

const ll INF = 1e18;

int main() {
  int n, m; cin >> n >> m;
  vector<int> p(n), c(n);
  vector f(n, vector<bool>(m, false));
  rep(i, n) {
    cin >> p[i] >> c[i];
    rep(j, c[i]) {
      int F; cin >> F;
      F--;
      f[i][F] = true;
    }
  }

  auto check = [&](int i, int j) {
    if (p[i] < p[j]) return false;
    int iCnt = 0, jCnt = 0;
    rep(k, m) {
      if (f[i][k] && !f[j][k]) return false;
      if (f[i][k]) iCnt++;
      if (f[j][k]) jCnt++;
    }
    if (p[i] <= p[j] && iCnt >= jCnt) return false;

    return true;
  };

  rep(i, n) {
    rep(j, n) {
      if (i == j) continue;

      if (check(i, j)) {
        out("Yes");
        return 0;
      };
    }
  }

  out("No");
  return 0;
}
