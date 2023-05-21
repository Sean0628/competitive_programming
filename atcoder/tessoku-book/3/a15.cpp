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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<P> a(n);
  vector<int> ans(n);
  rep(i, n) {
    int x; cin >> x;
    a[i] = P(x, i);
  }

  sort(a.begin(), a.end());

  int j = 1;
  rep(i, n) {
    if (i == 0) ans[a[i].second] = j;
    else {
      if (a[i].first == a[i-1].first) ans[a[i].second] = j;
      else ans[a[i].second] = ++j;
    }
  }

  rep(i, n) {
    if (i) cout << " ";
    cout << ans[i];
  }
  return 0;
}
