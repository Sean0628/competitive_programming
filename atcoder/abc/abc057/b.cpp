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
  vector<P> a(n), b(m);
  rep(i, n) cin >> a[i].first >> a[i].second;
  rep(i, m) cin >> b[i].first >> b[i].second;

  rep(i, n) {
    int ans = 0;
    int min = 1000000000;
    rep(j, m) {
      int dist = abs(a[i].first - b[j].first) + abs(a[i].second - b[j].second);
      if (dist < min) {
        min = dist;
        ans = j+1;
      }
    }
    out(ans);
  }
  return 0;
}
