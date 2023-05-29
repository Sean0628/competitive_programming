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
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

mint nCr(int n, int r) {
  mint x = 1, y = 1;
  rep(i, r) {
    x *= n - i;
    y *= i + 1;
  }
  return x / y;
}

int main() {
  int n, r; cin >> n >> r;

  out(nCr(n, r).val());
  return 0;
}
