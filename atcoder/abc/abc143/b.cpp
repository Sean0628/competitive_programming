#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> d(n);
  rep(i, n) cin >> d[i];
  int ans = 0;
  rep(i, n) {
    rep(j, i) {
      ans += (d[i]*d[j]);
    }
  }

  cout << ans << endl;
  return 0;
}
