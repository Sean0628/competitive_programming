#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  int k, n; cin >> k >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = INT_MAX;
  rep(i, n) {
    int x = a[i], y = a[0];
    if (i != n-1) y = a[i+1];

    if (x < y) ans = min(ans, (k+x)-y);
    else ans = min(ans, x-y);
  }

  cout << ans << endl;
  return 0;
}
