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
  vector<int> a(m+2, 0);
  rep(i, m) cin >> a[i+1];
  a[m+1] = n+1;

  sort(a.begin(), a.end());

  vector<int> w;
  int mn = 1e9;
  for (int i = 1; i <= m+1; ++i) {
    int d = a[i] - a[i-1] - 1;
    if (d == 0) continue;
    chmin(mn, d);
    w.push_back(d);
  }

  if (n == m) {
    out(0);
    return 0;
  }

  int ans = 0;
  int sz = w.size();
  rep(i, sz) ans += (w[i]+mn-1) / mn;

  if (sz == 0) ans = 1;

  out(ans);

  return 0;
}
