#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int MOD = 10000;

int main() {
  int n; cin >> n;
  int ans = 0;

  rep(i, n) {
    char t; int a; cin >> t >> a;
    if (t == '+') ans += a;
    else if (t == '-') ans -= a;
    else if (t == '*') ans *= a;

    if (ans < 0) ans += MOD;

    ans %= MOD;
    cout << ans << endl;
  }

  return 0;
}
