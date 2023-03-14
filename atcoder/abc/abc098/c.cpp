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
  int n; cin >> n;
  string s; cin >> s;
  vector<int> w(n+1), e(n+1);

  for (int i = 1; i <= n; ++i) {
    int k = 0;
    if (s[i-1] == 'W') k = 1;
    w[i] = w[i-1] + k;
  }

  for (int i = n-1; i >= 0; --i) {
    int k = 0;
    if (s[i] == 'E') k = 1;
    e[i] = e[i+1] + k;
  }

  int ans = INT_MAX;
  rep(i, n+1) {
    ans = min(w[i]+e[i], ans);
  }

  out(ans);

  return 0;
}
