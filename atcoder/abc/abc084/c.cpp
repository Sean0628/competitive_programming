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
  vector<int> c(n), s(n), f(n);
  rep(i, n-1) cin >> c[i] >> s[i] >> f[i];

  rep(i, n) {
    int t = 0;
    for (int j = i; j < n-1; ++j) {
      if (t < s[j]) t = s[j];
      else if (t%f[j] == 0);
      else t = t + f[j] - t%f[j];

      t += c[j];
    }

    out(t);
  }
  return 0;
}
