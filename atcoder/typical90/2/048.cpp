#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, k; cin >> n >> k;
  vector<ll> a(n), b(n);
  vector<ll> vec;
  rep(i, n) {
    cin >> a[i] >> b[i];
    vec.emplace_back(b[i]);
    vec.emplace_back(a[i]-b[i]);
  }

  ll ans = 0;
  sort(vec.begin(), vec.end());
  reverse(vec.begin(), vec.end());
  rep(i, k) ans += vec[i];

  cout << ans << endl;
  return 0;
}
