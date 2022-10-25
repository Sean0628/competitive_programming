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

  vector<ll> cnt(101);
  rep(i, n) cnt[a[i] % 100]++;

  ll ans = 0;
  for (int i = 1; i < 50; ++i) ans += cnt[i] * cnt[100-i];
  ans += cnt[0] * (cnt[0] - 1) / 2;
  ans += cnt[50] * (cnt[50] - 1) / 2;

  cout << ans << endl;

  return 0;
}
