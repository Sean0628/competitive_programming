#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w, k; cin >> h >> w >> k;
  vector<string> c(h);
  rep(i, h) cin >> c[i];

  int ans = 0;
  rep(t, 1<<h) {
    vector<string> d = c;

    int remaining_steps = k;
    rep(i, h) {
      if (t>>i&1) {
        remaining_steps--;
        rep(j, w) d[i][j] = '#';
      }
    }

    auto f = [&](int n) {
      vector<P> col;
      rep(j, w) {
        int cnt = 0;
        rep(i, h) {
          if (d[i][j] == '.') cnt++;
        }

        col.emplace_back(make_pair(cnt, j));
      }

      sort(col.begin(), col.end());
      reverse(col.begin(), col.end());

      rep(j, n) {
        int idx = col[j].second;
        rep(i, h) d[i][idx] = '#';
      }

      int ret = 0;
      rep(i, h) rep(j, w) if (d[i][j] == '#') ret++;

      return ret;
    };

    if (remaining_steps >= 0) {
      int num = f(remaining_steps);
      ans = max(ans, num);
    }
  }

  cout << ans << endl;

  return 0;
}
