#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, w; cin >> n >> w;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<int> f(w+1, 0);
  rep(i, n) {
    if (a[i] <= w) f[a[i]] = 1;

    rep(j, n) {
      if (i == j) continue;
      int aj = a[i] + a[j];
      if (aj <= w) f[aj] = 1;

      rep(k, n) {
        if (i == k || j == k) continue;
        int ak = a[i] + a[j] + a[k];
        if (ak <= w) f[ak] = 1;
      }
    }
  }

  int cnt = 0;
  rep(i, w+1) if (f[i]) cnt++;
  cout << cnt << endl;

  return 0;
}

