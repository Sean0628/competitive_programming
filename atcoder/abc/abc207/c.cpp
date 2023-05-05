#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<double, double>;
using mint = modint1000000007;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;

  vector<P> v(n);
  rep(i, n) {
    int t; double l, r; cin >> t >> l >> r;

    if (t == 2) r -= 0.5;
    if (t == 3) l += 0.5;
    if (t == 4) {
      l += 0.5;
      r -= 0.5;
    }

    v[i] = {l, r};
  }

  int ans = 0;

  rep(i, n) {
    rep(j, i) {
      ans += (max(v[i].first, v[j].first) <= min(v[i].second, v[j].second));
    }
  }

  out(ans);

  return 0;
}

