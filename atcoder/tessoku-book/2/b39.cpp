#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, d; cin >> n >> d;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  vector<bool> used(n);
  int ans = 0;
  for (int i = 1; i <= d; ++i) {
    int v = 0;
    int id = -1;
    rep(j, n) {
      if (used[j]) continue;
      if (v < y[j] && x[j] <= i) {
        v = y[j];
        id = j;
      }
    }

    if (id != -1) {
      ans += v;
      used[id] = true;
    }
  }

  cout << ans << endl;
  return 0;
}
