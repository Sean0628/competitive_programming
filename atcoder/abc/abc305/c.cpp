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
  int h, w; cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  auto check = [&](int i, int j) {
    vector<int> dx = { 0, 1, 1 };
    vector<int> dy = { 1, 1, 0 };

    int cnt = 0;
    rep(k, 3) {
      int ni = i + dx[k];
      int nj = j + dy[k];

      if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
      if (s[ni][nj] == '.') break;

      cnt++;
    }

    if (cnt == 3) return true;

    dx = { 0, 1, 1 };
    dy = { -1, -1, 0 };

    cnt = 0;
    rep(k, 3) {
      int ni = i + dx[k];
      int nj = j + dy[k];

      if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
      if (s[ni][nj] == '.') break;

      cnt++;
    }

    if (cnt == 3) return true;

    dx = { -1, -1, 0 };
    dy = { 0, 1, 1 };

    cnt = 0;
    rep(k, 3) {
      int ni = i + dx[k];
      int nj = j + dy[k];

      if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
      if (s[ni][nj] == '.') break;

      cnt++;
    }

    if (cnt == 3) return true;

    dx = { 0, -1, -1 };
    dy = { -1, -1, 0 };

    cnt = 0;
    rep(k, 3) {
      int ni = i + dx[k];
      int nj = j + dy[k];

      if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;
      if (s[ni][nj] == '.') break;

      cnt++;
    }

    if (cnt == 3) return true;

    return false;
  };

  rep(i, h) {
    rep(j, w) {
      if (s[i][j] == '#') continue;

      if (check(i, j)) printf("%d %d\n", i+1, j+1);
    }
  }
  return 0;
}
