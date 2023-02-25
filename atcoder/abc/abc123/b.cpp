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
  int n = 5;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) b[i] = (a[i]+9)/10*10;

  int ans = INT_MAX;
  rep(i, n) {
    int sum = 0;
    rep(j, n) {
      if (i == j) sum += a[i];
      else sum += b[i];
    }
    ans = min(ans, sum);
  }

  out(ans);

  return 0;
}
