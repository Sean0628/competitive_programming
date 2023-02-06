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
  vector<int> a(n);
  rep(i, n ) cin >> a[i];

  sort(a.begin(), a.end());

  int ans = 0;
  rep(j, n) rep(i, j) {
    int ab = a[i]+a[j];
    int r = lower_bound(a.begin(), a.end(), ab) - a.begin();
    int l = j+1;

    ans += max(0, r-l);
  }
  out(ans);
  return 0;
}
