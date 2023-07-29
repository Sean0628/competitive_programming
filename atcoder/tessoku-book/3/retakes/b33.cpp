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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "First" : "Second") << endl; }

int main() {
  int n, h, w; cin >> n >> h >> w;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  int xorsum = 0;
  rep(i, n) xorsum ^= (a[i] - 1);
  rep(i, n) xorsum ^= (b[i] - 1);

  cyn(xorsum != 0);
  return 0;
}
