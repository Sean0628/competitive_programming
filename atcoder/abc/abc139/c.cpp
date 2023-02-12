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
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  int cnt = 0, ans = 0;
  rep(i, n-1) {
    if (h[i] >= h[i+1]) {
      cnt++;
      ans = max(ans, cnt);
    } else {
      ans = max(ans, cnt);
      cnt = 0;
    }
  }

  out(ans);
  return 0;
}
