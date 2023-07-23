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
  set<pair<int, pair<int, int>>> st;
  set<P> seen;

  auto dfs = [&](auto self, int x, int y, int d) -> void {
    if (st.count({d, {x, y}})) return;

    seen.insert({x, y});
    st.insert({d, {x, y}});
    int nx = x, ny = y;
    if (d == 0) nx--;
    if (d == 1) ny++;
    if (d == 2) nx++;
    if (d == 3) ny--;

    if (s[nx][ny] == '#') {
      rep(i, 4) {
        if (i == d) continue;

        int onx = x, ony = y;
        if (i == 0) onx--;
        if (i == 1) ony++;
        if (i == 2) onx++;
        if (i == 3) ony--;
        if (s[onx][ony] == '#') continue;

        self(self, onx, ony, i);
      }
    } else self(self, nx, ny, d);
  };

  int x = 1, y = 1;
  // 0: up, 1: right, 2: down, 3: left
  rep(i, 4) dfs(dfs, x, y, i);

  out(seen.size());
  return 0;
}
