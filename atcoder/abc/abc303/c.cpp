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
  int n, m, h, k; cin >> n >> m >> h >> k;
  string s; cin >> s;
  map<P, bool> mp;
  rep(i, m) {
    int x, y; cin >> x >> y;
    mp[{x, y}] = true;
  }

  // R, L, U, D
  vector<int> dx = {1, -1, 0, 0};
  vector<int> dy = {0, 0, 1, -1};

  int x = 0, y = 0;

  bool ok = true;
  rep(i, n) {
    if (h == 0) {
      ok = false;
      break;
    }

    int dir;
    if (s[i] == 'R') dir = 0;
    else if (s[i] == 'L') dir = 1;
    else if (s[i] == 'U') dir = 2;
    else dir = 3;

    x += dx[dir];
    y += dy[dir];

    h--;

    if (mp[{x, y}] && h < k) {
      h = k;
      mp[{x, y}] = false;
    }
  }

  cyn(ok);
  return 0;
}
