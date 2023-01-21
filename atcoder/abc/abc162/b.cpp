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
  int n; cin >> n;
  ll ans = 0;
  for (int i = 1; i <= n; ++i) {
    if (i % 3 == 0 && i % 5 == 0) break;
    else if (i % 3 == 0) break;
    else if (i % 5 == 0) break;

    ans += i;
  }
  cout << ans << endl;
  return 0;
}
