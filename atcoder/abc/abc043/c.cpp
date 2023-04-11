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
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 1e9;

  for (int i = -100; i <= 100; i++) {
    int tmp = 0;
    rep(j, n) {
      tmp += (a[j] - i) * (a[j] - i);
    }
    ans = min(ans, tmp);
  }

  out(ans);
  return 0;
}
