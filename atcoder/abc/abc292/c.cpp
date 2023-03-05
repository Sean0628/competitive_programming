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

ll f(int x) {
  ll res = 0;
  for (int i = 1; i*i <= x; ++i) {
    if (x%i != 0) continue;
    int j = x/i;
    if (i == j) res++;
    else res += 2;
  }

  return res;
}

int main() {
  int n; cin >> n;
  ll ans = 0;
  for (int x = 1; x < n; ++x) {
    ans += f(x)*f(n-x);
  }

  out(ans);
  return 0;
}
