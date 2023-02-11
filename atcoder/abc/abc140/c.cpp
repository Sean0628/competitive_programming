#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;
int main() {
  int n; cin >> n;
  vector<int> b(n-1);
  rep(i, n-1) cin >> b[i];
  vector<int> a(n, INF);
  rep(i, n-1) {
    a[i] = min(a[i], b[i]);
    a[i+1] = min(a[i+1], b[i]);
  }
  int ans = 0;
  rep(i, n) ans += a[i];
  out(ans);
  return 0;
}
