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
  double tot = 0;
  double p = 380000;
  rep(i, n) {
    double x;
    string u; cin >> x >> u;

    if (u == "JPY") tot += x;
    else tot += x*p;
  }

  printf("%.10f\n", tot);
  return 0;
}
