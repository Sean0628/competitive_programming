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
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  auto check = [&](int i, int j) {
    // check blacks
    rep(x, 3) rep(y, 3) {
      int ni = i+x, nj = j+y;
      if (ni >= n || nj >= m) return false;
      if (s[ni][nj] != '#') return false;
    }
    for (int x = 6; x <= 8; ++x) {
      for (int y = 6; y <= 8; ++y) {
        int ni = i+x, nj = j+y;
        if (ni >= n || nj >= m) return false;
        if (s[ni][nj] != '#') return false;
      }
    }

    // check whites
    rep(x, 3) {
      int ni = i + x, nj = j + 3;
      if (ni >= n || nj >= m) return false;
      if (s[ni][nj] == '#') return false;
    }
    rep(y, 4) {
      int ni = i + 3, nj = j + y;
      if (ni >= n || nj >= m) return false;
      if (s[ni][nj] == '#') return false;
    }

    for (int y = 5; y <= 8; ++y) {
      int ni = i + 5, nj = j + y;
      if (ni >= n || nj >= m) return false;
      if (s[ni][nj] == '#') return false;
    }

    for (int x = 6; x <= 8; ++x) {
      int ni = i + x, nj = j + 5;
      if (ni >= n || nj >= m) return false;
      if (s[ni][nj] == '#') return false;
    }

    return true;
  };

  vector<P> ans;
  rep(i, n) rep(j, m) if (check(i, j)) ans.push_back({i+1, j+1});

  for (auto [i, j] : ans) cout << i << " " << j << endl;
  return 0;
}
