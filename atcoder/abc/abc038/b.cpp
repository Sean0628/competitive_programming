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
void cyn(bool x) { cout << (x ? "YES" : "NO") << endl; }

int main() {
  int h, w, h2, w2; cin >> h >> w >> h2 >> w2;

  cyn(h == h2 || h == w2 || w == h2 || w == w2);
  return 0;
}
