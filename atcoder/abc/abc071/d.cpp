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
  int n; cin >> n;
  string a, b; cin >> a >> b;

  mint ans = 1;

  int idx = 0;
  int prev = -1;
  while (idx < n) {
    if (a[idx] == b[idx]) {
      if (idx == 0)  ans *= 3;
      else if (prev == 0) ans *= 2;
      else ans *= 1;

      prev = 0;
      idx++;
    } else {
      if (idx == 0) ans *= 6;
      else if (prev == 1) ans *= 3;
      else ans *= 2;

      prev = 1;
      idx += 2;
    }
  }

  out(ans.val());

  return 0;
}
