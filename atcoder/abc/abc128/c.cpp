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
  int n, m; cin >> n >> m;
  vector<int> a(n);
  rep(i, m) {
    int k; cin >> k;
    rep(j, k) {
      int s; cin >> s;
      s--;
      a[s] |= 1<<i;
    }
  }

  int p = 0;
  rep(i, m) {
    int x; cin >> x;
    p |= x<<i;
  }

  int cnt = 0;
  rep(i, 1<<n) {
    int t = 0;
    rep(j, n) {
      if (i>>j&1) t ^= a[j];
    }

    if (t == p) cnt++;
  }

  out(cnt);
  return 0;
}
