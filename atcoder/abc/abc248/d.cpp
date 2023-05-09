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

  vector<int> a(n);
  vector<vector<int>> idx(n);
  rep(i, n) {
    cin >> a[i];
    a[i]--;
    idx[a[i]].push_back(i);
  }

  int q; cin >> q;
  rep(i, q) {
    int l, r, x; cin >> l >> r >> x;
    x--;

    out(lower_bound(idx[x].begin(), idx[x].end(), r) - lower_bound(idx[x].begin(), idx[x].end(), l-1));
  }
  return 0;
}
