#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int a, b; cin >> a >> b;
  for (int n = 0; n < 10'000; ++n) {
    int za = n*8/100;
    int zb = n*10/100;

    if (a == za && b == zb) {
      cout << n << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
