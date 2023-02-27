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
  int a, b, k; cin >> a >> b >> k;
  int cnt = 0, ans = 0;
  int m = max(a, b);
  for (int i = m; i > 0; --i) {
    if (a%i == 0 && b%i == 0) cnt++;

    if (cnt == k) {
      ans = i;
      break;
    }
  }

  out(ans);
  return 0;
}
