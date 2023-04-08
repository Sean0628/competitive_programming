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
  string e, o; cin >> e >> o;
  int n = o.size() + e.size();
  string ans = "";
  rep(i, n) {
    if (i % 2 == 0) ans += e[i / 2];
    else ans += o[i / 2];
  }
  out(ans);
  return 0;
}
