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
  vector<int> a(n);

  auto cnt = [](int m) {
    int res = 0;
    while (m > 0 && m%2 == 0) {
      m /= 2;
      res++;
    }

    return res;
  };

  int ans = 0;
  rep(i, n) {
    cin >> a[i];
    if (a[i]%2 == 0) ans += cnt(a[i]);
  }

  out(ans);
  return 0;
}
