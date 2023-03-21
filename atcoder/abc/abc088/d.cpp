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
  int h, w; cin >> h >> w;
  vector<string> s(h);

  rep(i, h) cin >> s[i];

  vector dist(h, vector<int> (w, 10000));
  dist[0][0] = 0;
  int ans = 0;

  rep(i, h) {
    rep(j, w) {
      if (s[i][j] == '.') ans++;
    }
  }

  ans -= 2;
  deque<P> dq;
  vector<int> dir = { 1, 0, -1, 0, 1 };
  dq.push_back({ 0, 0 });

  while (!dq.empty()) {
    int curri = dq.front().first;
    int currj = dq.front().second;
    dq.pop_front();
    rep(k, 4) {
      int ni = curri + dir[k];
      int nj = currj + dir[k+1];

      if (ni < 0 || ni >= h || nj < 0 || nj >= w) continue;

      int add = 0;

      if (s[ni][nj] == '#') continue;
      if (s[ni][nj] == '.') add++;
      if (ni == h-1 && nj == w-1) add = 0;

      if (dist[ni][nj] > dist[curri][currj]+add) {
        dist[ni][nj] = dist[curri][currj]+add;
        dq.push_back({ ni, nj });
      }
    }
  }

  if (dist[h-1][w-1] == 10000) ans = -1;
  else ans -= dist[h-1][w-1];
  out(ans);
  return 0;
}
