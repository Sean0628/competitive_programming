#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n; cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  vector<ll> sum(n*2+2);
  for (int i = 1; i <= n; ++i) sum[i] = sum[i-1]+a[i-1];
  for (int i = 1; i <= n; ++i) sum[i+n] = sum[i+n-1]+a[i-1];

  if (sum[n] % 10LL != 0LL) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i <= n; ++i) {
    ll goal = sum[i] + sum[n] / 10LL;
    int pos1 = lower_bound(sum.begin(), sum.end(), goal) - sum.begin();
    if (sum[pos1] == goal) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}
