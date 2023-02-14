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

int main() {
  int n; cin >> n;
  vector<int> a(n+1), b(n);
  rep(i, n+1) cin >> a[i];
  rep(i, n) cin >> b[i];

  ll ans = 0;

  rep(i, n) {
    int l = min(a[i], b[i]);
    ans += l;
    a[i] -= l;
    b[i] -= l;

    int r = min(a[i+1], b[i]);
    ans += r;
    a[i+1] -= r;
    b[i] -= r;
  }

  out(ans);
  return 0;
}
