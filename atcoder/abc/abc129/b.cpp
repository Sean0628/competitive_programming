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
  int n; cin >> n;
  vector<int> w(n);
  rep(i,n) cin >> w[i];

  int ans = INT_MAX;
  for (int i = 1; i < n; ++i) {
    int a = 0, b = 0;
    rep(j, n) {
      if (i > j) a += w[j];
      else b += w[j];
    }
    ans = min(abs(a-b), ans);
  }
  out(ans);
  return 0;
}
