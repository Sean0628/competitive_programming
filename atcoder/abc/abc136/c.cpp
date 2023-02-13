#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> h(n), d(n);
  rep(i, n) {
    cin >> h[i];
  }
  bool ok = true;
  rep(i, n-1) {
    if (h[i] < h[i+1]) h[i+1]--;
    if (h[i] > h[i+1]) ok = false;
  }

  cyn(ok);
  return 0;
}
