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
  vector<int> a(n), b(n), c(n);
  rep(i, n) {
    cin >> a[i];
    a[i]--;
  }
  rep(i, n) cin >> b[i];
  rep(i, n-1) cin >> c[i];

  int tot = 0;

  int li = a[0];
  rep(i, n) {
    tot += b[a[i]];
    if (a[i] > 0 && li == a[i]-1) tot += c[li];
    li = a[i];
  }

  out(tot);
  return 0;
}
