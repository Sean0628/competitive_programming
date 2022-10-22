#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x, y; cin >> n >> x >> y;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  int xor_sum = 0;

  rep(i, n) {
    if (a[i] % 5 == 0 || a[i] % 5 == 1) xor_sum ^= 0;
    if (a[i] % 5 == 2 || a[i] % 5 == 3) xor_sum ^= 1;
    if (a[i] % 5 == 4) xor_sum ^= 2;
  }

  string ans = "First";
  if (xor_sum == 0) ans = "Second";

  cout << ans << endl;
  return  0;
}
