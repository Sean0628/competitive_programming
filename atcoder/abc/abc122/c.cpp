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
  string s; cin >> s;

  vector<int> sum(n, 0);

  for (int i = 1; i <= n; ++i) {
    int num = 0;
    if (s[i-2] == 'A' && s[i-1] == 'C') num = 1;
    sum[i] = sum[i-1] + num;
  }

  rep(i, q) {
    int l, r; cin >> l >> r;
    int ans = sum[r] - sum[l];
    out(ans);
  }
  return 0;
}
