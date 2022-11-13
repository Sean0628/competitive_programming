#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

// int fact(int n) {
//   if (n == 0) return 1;
//
//   int res = 1;
//   for (int i = 2; i <= n; ++i) res *= i;
//   return res;
// }
//
// int nCr(int n, int r) {
//   return fact(n) / (fact(r) * fact(n - r));
// }

int main() {
  int n; cin >> n;
  vector<int> a(n);
  vector<ll> cnt(101, 0);
  rep(i, n) cin >> a[i];

  rep(i, n) {
    cnt[a[i]]++;
  }

  ll tot = 0;
  for (int i = 1; i <= 100; ++i) {
    tot += cnt[i] * (cnt[i]-1) * (cnt[i]-2) / 6;
  }

  cout << tot << endl;
  return 0;
}
