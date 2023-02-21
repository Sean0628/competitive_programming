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
  int n, m; cin >> n >> m;
  vector<int> a(n+1);
  rep(i, m) {
    int l, r;
    cin >> l >> r;
    l--, r--;
    a[l]++, a[r+1]--;
  }

  for (int i = 1; i <= n; ++i) a[i] += a[i-1];

  int cnt = 0;
  rep(i, n) if (a[i] == m) cnt++;

  out(cnt);
  return 0;
}
