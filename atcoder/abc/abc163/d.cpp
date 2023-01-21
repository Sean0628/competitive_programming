#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

using mint = modint1000000007;

ll sum(ll l, ll r) {
  return (l+r)*(r-l+1)/2;
}

int main() {
  int n, k; cin >> n >> k;
  mint ans;

  for (int i = k; i <= n+1; ++i) {
    ll l = sum(0, i-1), r = sum(n-i+1, n);
    ans += r-l+1;
  }
  cout << ans.val() << endl;
  return 0;
}
