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
  vector<int> p(n);
  rep(i, n) cin >> p[i];

  sort(p.begin(), p.end());
  int tot = 0;
  rep(i, n) {
    if (i == n-1) tot += p[i]/2;
    else tot += p[i];
  }

  out(tot);
  return 0;
}
