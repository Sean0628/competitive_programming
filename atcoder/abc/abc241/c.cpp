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
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  auto check = [&](int i, int j) {
    // check vertically
    int cnt = 0;
    for (int d = 0; d < 6; ++d) {
      if (i+d >= n) { cnt = 0; break; }
      if (s[i+d][j] == '#') cnt++;
    }
    if (cnt >= 4) return true;

    // check horizontally
    cnt = 0;
    for (int d = 0; d < 6; ++d) {
      if (j+d >= n) { cnt = 0; break; }
      if (s[i][j+d] == '#') cnt++;
    }
    if (cnt >= 4) return true;

    // check diagonally
    cnt = 0;
    for (int d = 0; d < 6; ++d) {
      if (i+d >= n || j+d >= n) { cnt = 0; break; }
      if (s[i+d][j+d] == '#') cnt++;
    }
    if (cnt >= 4) return true;

    // check diagonally
    cnt = 0;
    for (int d = 0; d < 6; ++d) {
      if (i-d < 0 || j+d >= n) { cnt = 0; break; }
      if (s[i-d][j+d] == '#') cnt++;
    }
    if (cnt >= 4) return true;

    return false;
  };

  rep(i, n) rep(j, n) {
    if (check(i, j)) {
      out("Yes");
      return 0;
    }
  }

  out("No");

  return 0;
}
