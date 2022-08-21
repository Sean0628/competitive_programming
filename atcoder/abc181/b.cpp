#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  ll ans = 0;

  rep(i, n) {
    ans += (a[i]+b[i]) * (b[i]-a[i]+1)/2;
  }

  cout << ans << endl;
  return 0;
}
