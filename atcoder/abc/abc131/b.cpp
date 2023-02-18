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
  int n, l; cin >> n >> l;

  vector<int> t(n);
  int m = INT_MAX, idx = 0;
  rep(i, n) {
    t[i] = l+i;
    if (abs(m) > abs(t[i])) {
      m = t[i];
      idx = i;
    }
  }

  int ans = 0;
  rep(i, n) if (idx != i) ans += t[i];
  out(ans);
  return 0;
}
