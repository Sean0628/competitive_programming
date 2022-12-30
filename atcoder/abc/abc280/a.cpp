#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];
  int cnt = 0;
  rep(i, h) rep(j, w) if (s[i][j] == '#') cnt++;

  cout << cnt << endl;
  return 0;
}
