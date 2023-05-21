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

  vector<vector<P>> a;

  vector<char> t = { 's', 'n', 'u', 'k', 'e' };

  auto check = [&](auto self, int r, int c, int k, vector<P> b, int d = -1) {
    if (s[r][c] != t[k]) return;
    b.push_back(P(r+1, c+1));

    if (k == 4) {
      a.push_back(b);
      return;
    }

    vector<int> dx = {1, -1, 1, 1, 0, -1, 0, -1};
    vector<int> dy = {1, 1, -1, 0, 1, 0, -1, -1};

    if (d == -1) {
      rep(m, 8) {
        int x = c + dx[m];
        int y = r + dy[m];

        if (x < 0 || x >= w || y < 0 || y >= h) continue;

        if (s[y][x] == t[k+1]) self(self, y, x, k+1, b, m);
      }
    } else {
      int x = c + dx[d];
      int y = r + dy[d];

      if (x < 0 || x >= w || y < 0 || y >= h) return;

      if (s[y][x] == t[k+1]) self(self, y, x, k+1, b, d);
    }
  };

  rep(i, h) {
    rep(j, w) {
      vector<P> b;
      check(check, i, j, 0, b);
    }
  }

  rep(i, a.size()) {
    if (a[i].size() == 5) {
      rep(j, 5) {
        cout << a[i][j].first << " " << a[i][j].second << endl;
      }
    }
  }

  return 0;
}
