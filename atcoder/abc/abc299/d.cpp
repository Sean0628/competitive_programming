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
  int l = 1, r = n;

  while (l+1 < r) {
    int m = (l + r) / 2;
    cout << "? " << m << endl;

    int c; cin >> c;

    if (c == 0) {
      l = m;
    } else {
      r = m;
    }
  }

  cout << "! " << l << endl;
  return 0;
}
