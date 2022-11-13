#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, q; cin >> n >> q;

  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  vector<ll> sum(n+1);
  for (int i = 1; i <= n; ++i) {
    sum[i] = sum[i-1] + a[i-1];
  }

  rep(i, q) {
    int l, r; cin >> l >> r;
    cout << sum[r] - sum[l-1] << endl;
  }
  return 0;
}
