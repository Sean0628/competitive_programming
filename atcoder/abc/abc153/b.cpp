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
  int h, n; cin >> h >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  ll tot = 0;
  rep(i, n) {
    cin >> a[n];
    tot += a[i];
  }
  cyn(tot >= h);

  return 0;
}
