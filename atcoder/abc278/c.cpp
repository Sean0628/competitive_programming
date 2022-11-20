#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, q; cin >> n >> q;
  map<int, map<int, bool>> mp;
  rep(i, q) {
    int t, a, b; cin >> t >> a >> b;

    if (t == 1) {
      mp[a][b] = true;
    } else if (t == 2) {
      mp[a][b] = false;
    } else {
      string ans = "No";
      if (mp[a][b] && mp[b][a]) ans = "Yes";
      cout << ans << endl;
    }
  }
  return 0;
}
