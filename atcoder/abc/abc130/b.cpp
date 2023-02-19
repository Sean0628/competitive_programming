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
  int n, x; cin >> n >> x;
  vector<int> l(n);
  rep(i, n) cin >> l[i];

  int d = 0, cnt = 1;
  for (int i = 1; i <= n; ++i) {
    int t = d += l[i-1];
    if (t <= x) cnt++;
  }

  out(cnt);
  return 0;
}
