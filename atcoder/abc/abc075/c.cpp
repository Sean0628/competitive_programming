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

  set<int> st;

  vector<int> a(m), b(m);
  rep(i, m) {
    cin >> a[i] >> b[i];
    a[i]--, b[i]--;
  }

  int cnt = 0;
  rep(i, m) {
    dsu d(n);

    rep(j, m) {
      if (i == j) continue;

      d.merge(a[j], b[j]);
    }

    if (!d.same(a[i], b[i])) cnt++;
  }

  out(cnt);

  return 0;
}
