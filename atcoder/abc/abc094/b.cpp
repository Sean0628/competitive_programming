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
  int n, m, x; cin >> n >> m >> x;
  vector<int> a(m);
  rep(i, m) cin >> a[i];

  int ans = INT_MAX;

  {
    int tot = 0;
    rep(i, m) if (a[i] < x) tot++;
    ans = min(tot, ans);
  }
  {
    int tot = 0;
    rep(i, m) if (a[i] > x) tot++;
    ans = min(tot, ans);
  }

  out(ans);

  return 0;
}
