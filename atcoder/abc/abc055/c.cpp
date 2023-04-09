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
  ll n, m; cin >> n >> m;
  ll tot = 0;

  if (n*2 <= m) {
    tot += n;
    m -= n*2;
    tot += m/4;
  } else {
    tot += m/2;
  }

  out(tot);
  return 0;
}
