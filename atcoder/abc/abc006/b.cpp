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

int main() {
  int n; cin >> n;
  const int MOD = 10007;

  vector<int> a(n);

  a[0] = 0, a[1] = 0, a[2] = 1;

  for (int i = 3; i < n; ++i) {
    a[i] = (a[i-1] + a[i-2] + a[i-3]) % MOD;
  }

  out(a[n-1]);

  return 0;
}
