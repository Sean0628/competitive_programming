#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, a, b, c;
  cin >> n >> a >> b >> c;

  int ans = 10'000;
  rep(i, 10'000) {
    rep(j, 10'000-i) {
      ll rem = n - (a*i + b*j);
      if (rem < 0 || rem%c != 0) continue;

      int k = 0;
      if (rem != 0) k = rem/c;

      int tot = i + j + k;
      if (tot < 10'000) ans = min(tot, ans);
    }
  }

  cout << ans << endl;
  return 0;
}
