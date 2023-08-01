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
void cyn(bool x) { cout << (x ? "First" : "Second") << endl; }

int main() {
  vector<P> calc = {{1, 1}, {1, 0}, {0, 1}, {0, 0}};

  int n; cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  ll ans = 0;
  rep(i, 4) {
    ll tot = 0;
    rep(j, n) {
      int tmp = 0;
      if (calc[i].first == 1) tmp += a[j];
      else tmp -= a[j];
      if (calc[i].second == 1) tmp += b[j];
      else tmp -= b[j];

      if (tmp < 0) continue;
      tot += tmp;
    }
    chmax(ans, tot);
  }

  out(ans);
  return 0;
}
