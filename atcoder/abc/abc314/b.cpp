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
  vector<int> c(n);
  vector<set<int>> a(n);
  rep(i, n) {
    cin >> c[i];
    rep(j, c[i]) {
      int x; cin >> x;
      a[i].insert(x);
    }
  }
  int x; cin >> x;

  int mn = 100;
  rep(i, n) {
    if (!a[i].count(x)) continue;

    chmin(mn, c[i]);
  }

  vector<int> ans;
  rep(i, n) {
    if (c[i] == mn && a[i].count(x)) ans.push_back(i+1);
  }

  out(ans.size());
  for (int i : ans) cout << i << endl;
  return 0;
}
