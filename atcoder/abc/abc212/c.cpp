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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  sort(b.begin(), b.end());
  int mn = 1e9;
  rep(i, n) {
    int pos = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
    if (pos < m) chmin(mn, abs(a[i]-b[pos]));
    if (pos-1 >= 0) chmin(mn, abs(a[i]-b[pos-1]));
  }

  out(mn);
  return 0;
}
