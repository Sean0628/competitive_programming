#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<string> s(n);
  rep(i, n) cin >> s[i];

  int ans = 0;
  rep(i, n) {
    for (int j = i+1; j < n; ++j) {
      int cnt = 0;
      rep(k, m) {
        if (s[i][k] == 'o' || s[j][k] == 'o') cnt++;
      }

      if (cnt == m) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
