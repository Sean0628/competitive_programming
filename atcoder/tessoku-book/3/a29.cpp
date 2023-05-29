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

mint power(int a, int b) {
  mint p = a, res = 1;

  rep(i, 30) {
    if (b&(1<<i)) res *= p;
    p *= p;
  }

  return res;
}

int main() {
  int a, b; cin >> a >> b;

  mint ans = power(a, b);

  out(ans.val());
  return 0;
}
