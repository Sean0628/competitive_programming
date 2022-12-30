#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int best = -1, ans = -1;
  for (int k = 2; k <= 1000; k++) {
    int cur = 0;
    rep(i, n) if (a[i]%k == 0) cur++;
    if (best < cur) {
      best = cur;
      ans = k;
    }
  }

  cout << ans << endl;
  return 0;
}
