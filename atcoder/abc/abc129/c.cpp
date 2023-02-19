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

const int MOD = 1'000'000'007;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m);
  rep(i, m) cin >> a[i];

  vector<int> s(n+2);
  vector<bool> b(n+1);
  rep(i, m) {
    b[a[i]] = true;
  }

  s[n] = 1;
  for (int i = n-1; i >= 0; --i) {
    if (b[i]) continue;

    s[i] = (s[i+1] + s[i+2])%MOD;
  }

  out(s[0]);

  return 0;
}
