#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w, x, y; cin >> h >> w >> x >> y;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  // 2, 2
  int ans = 1;
  int cx, cy;

  cx = --x - 1; cy = --y;
  while (cx >= 0) {
    if (s[cx][y] == '.') ans += 1;
    else break;
    cx--;
  }
  cx = x + 1;
  while (cx < h) {
    if (s[cx][y] == '.') ans += 1;
    else break;
    cx++;
  }

  cy = y - 1;
  while (cy >= 0) {
    if (s[x][cy] == '.') ans += 1;
    else break;
    cy--;
  }

  cy = y + 1;
  while (cy < w) {
    if (s[x][cy] == '.') ans += 1;
    else break;
    cy++;
  }

  cout << ans << endl;

  return 0;
}
