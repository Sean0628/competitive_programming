#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "APPROVED" : "DENIED") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  bool ok = true;
  rep(i, n) {
    if (a[i] % 2 != 0) continue;
    if (a[i] % 3 == 0 || a[i] % 5 == 0) continue;

    ok = false;
  }

  cyn(ok);
  return 0;
}
