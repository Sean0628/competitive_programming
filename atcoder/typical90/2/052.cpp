#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int M = 1e9 + 7;

int main() {
  int n; cin >> n;
  vector a(n, vector<int> (6));
  vector<int> sum(n);

  rep(i, n) rep(j, 6) {
    cin >> a[i][j];
    sum[i] += a[i][j];
  }

  ll ans = 1;
  rep(i, n) {
    ans *= sum[i];
    ans %= M;
  }

  cout << ans << endl;
  return 0;
}
