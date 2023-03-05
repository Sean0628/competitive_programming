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
  int n, q; cin >> n >> q;
  vector<int> cnt(n);
  rep(i, q) {
    int c, x; cin >> c >> x;
    x--;

    if (c == 1) {
      cnt[x]++;
    } else if (c == 2) {
      cnt[x] += 2;
    } else {
      cyn(cnt[x] >= 2);
    }
  }
  return 0;
}
