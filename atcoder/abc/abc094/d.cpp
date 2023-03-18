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
  int mx = INT_MIN;
  rep(i, n) mx = max(mx, a[i]);

  int d = INT_MAX;
  int r = 0;
  for (auto i : a) {
    if (i == mx) continue;

    int tmp = abs(mx/2-i);
    if (tmp < d) {
      d = tmp;
      r = i;
    }
  }

  printf("%d %d\n", mx, r);
  return 0;
}
