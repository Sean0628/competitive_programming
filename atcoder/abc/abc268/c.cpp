#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> p(n);
  rep(i, n) cin >> p[i];
  vector<int> cnt(n);
  rep(i, n) {
    int j = (p[i]-i-1+n)%n;
    rep(k, 3) cnt[(j+k)%n]++;
  }

  cout << endl;

  int ans = 0;
  rep(i, n) ans = max(ans, cnt[i]);
  cout << ans << endl;
  return 0;
}
