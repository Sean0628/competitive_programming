#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint998244353;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;

int main() {
  int n; cin >> n;
  vector<int> c(n);
  vector<set<int>> a(n);
  rep(i, n) {
    cin >> c[i];
    rep(j, c[i]) {
      int y; cin >> y;
      a[i].insert(y);
    }
  }
  int x; cin >> x;
  vector<P> ans;
  int mn = INF;

  rep(i, n) {
    if (a[i].count(x)) {
      ans.push_back({c[i], i});
      chmin(mn, c[i]);
    }
  }

  stable_sort(ans.begin(), ans.end());

  int cnt = 0;
  for (auto [c, i] : ans) if (c == mn) cnt++;
  out(cnt);
  for (auto [c, i] : ans) if (c == mn) out(i+1);
  return 0;
}
