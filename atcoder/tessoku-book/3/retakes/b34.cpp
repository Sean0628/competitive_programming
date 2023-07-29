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
  int n, x, y; cin >> n >> x >> y;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  vector<int> grundy = { 0, 0, 1, 1, 2 };
  ll xorsum = 0;
  rep(i, n) xorsum ^= grundy[a[i] % 5];

  cyn(xorsum != 0);

  return 0;
}
