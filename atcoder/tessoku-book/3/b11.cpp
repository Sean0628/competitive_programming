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
  vector<int> x(n);
  rep(i, n) cin >> x[i];

  sort(x.begin(), x.end());
  int q; cin >> q;
  rep(i, q) {
    int m; cin >> m;
    int pos = lower_bound(x.begin(), x.end(), m) - x.begin();
    out(pos);
  }
  return 0;
}