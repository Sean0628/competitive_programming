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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int q; cin >> q;

  mint ans = 1;
  deque<int> d(1, 1);

  rep(i, q) {
    int t; cin >> t;

    if (t == 1) {
      int x; cin >> x;
      d.push_back(x);
      ans = ans*10 + x;
    } else if (t == 2) {
      ans -= mint(10).pow(d.size()-1) * d.front();
      d.pop_front();
    } else {
      out(ans.val());
    }
  }
  return 0;
}
