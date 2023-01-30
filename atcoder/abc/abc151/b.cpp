#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, k, m; cin >> n >> k >> m;
  vector<int> a(n);

  int tot = 0;
  rep(i, n-1) {
    cin >> a[i];
    tot += a[i];
  }

  int x = m*n-tot;

  int ans = x;
  if (x > k) ans = -1;
  else if (x < 0) ans = 0;
  cout << ans << endl;

  return 0;
}
