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
  int n, a, b; cin >> n >> a >> b;

  auto check = [&](int k) {
    int sum = 0;
    while (k > 0) {
      sum += k%10;
      k /= 10;
    }

    return a <= sum && sum <= b;
  };

  int ans = 0;
  for (int i = 1; i <= n; ++i) {
    if (check(i)) ans += i;
  }

  out(ans);
  return 0;
}
