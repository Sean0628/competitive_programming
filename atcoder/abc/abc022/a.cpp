#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, s, t; cin >> n >> s >> t;
  int w; cin >> w;
  vector<int> a(n);

  for (int i = 1; i < n; i++) {
    cin >> a[i];
  }

  int cnt = 0;
  rep(i, n) {
    w += a[i];
    if (s <= w && w <= t) cnt++;
  }

  out(cnt);
  return 0;
}
