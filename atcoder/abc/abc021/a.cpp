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
  vector<int> m = { 1, 2, 4, 8 };
  reverse(m.begin(), m.end());

  int n; cin >> n;

  vector<int> ans;
  rep(i, 4) {
    if (n >= m[i]) {
      ans.push_back(m[i]);
      n -= m[i];
    }
  }

  out(ans.size());
  rep(i, ans.size()) {
    out(ans[i]);
  }
  return 0;
}
