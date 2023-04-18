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
  int a, b; cin >> a >> b;
  int n; cin >> n;

  vector<int> t(n);
  rep(i, n) cin >> t[i];

  rep(i, n) {
    if (t[i] < a) out(a-t[i]);
    else if (t[i] > b) out(-1);
    else out(0);
  }
  return 0;
}
