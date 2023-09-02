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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const ll INF = 1e18;

int main() {
  double p; cin >> p;

  double l = 0.0, r = 100.0;
  double rm, lm;

  rep(i, 200) {
    lm = (l*2 + r) / 3;
    rm = (r*2 + l) / 3;

    if (rm+p/pow(2, rm/1.5) > lm+p/pow(2, lm/1.5)) r = rm;
    else l = lm;
  }

  printf("%.9f\n", rm+p/pow(2, rm/1.5));
  return 0;
}
