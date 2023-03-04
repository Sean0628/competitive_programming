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
  int n, t, a; cin >> n >> t >> a;
  vector<int> h(n);

  rep(i, n) cin >> h[i];

  int ans = 0;
  double mm = INT_MAX;

  rep(i, n) {
    double c = t - h[i]*0.006;

    if (mm > abs(a-c)) {
      mm = abs(a-c);
      ans = i;
    }
  }

  out(ans+1);
  return 0;
}
