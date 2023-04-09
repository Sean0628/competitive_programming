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
  int n, d; cin >> n >> d;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  rep(i, n-1) {
    if (a[i+1] - a[i] <= d) {
      out(a[i+1]);
      return 0;
    }
  }

  out(-1);
  return 0;
}
