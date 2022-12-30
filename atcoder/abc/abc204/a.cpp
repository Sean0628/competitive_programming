#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int x, y; cin >> x >> y;
  vector<int> s(3, 0);

  int ans;
  if (x == y) ans = x;
  else {
    s[x] = 1;
    s[y] = 1;

    rep(i, s.size()) if (!s[i]) ans = i;
  }

  cout << ans << endl;

  return 0;
}
