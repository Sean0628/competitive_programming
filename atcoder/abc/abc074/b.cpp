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
  int k; cin >> k;
  vector<int> a(n);

  rep(i, n) cin >> a[i];

  int ans = 0;
  rep(i, n) {
    int n = min(abs(0-a[i]), abs(k-a[i]));
    ans += n*2;
  }

  out(ans);
  return 0;
}
