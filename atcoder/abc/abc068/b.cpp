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
  int ans = n;
  int mx = 0;
  for (int i = n; i > 0; i--) {
    int tmp = i;
    int cnt = 0;
    while (tmp%2 == 0) {
      tmp /= 2;
      cnt++;
    }

    if (cnt > mx) {
      mx = cnt;
      ans = i;
    }
  }

  out(ans);

  return 0;
}
