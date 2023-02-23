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
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  ll ans = 0;
  int negative = 0;
  rep(i, n) {
    ans += abs(a[i]);
    if (a[i] <0) negative++;
  }

  if (negative%2 == 1) {
    int minA = INT_MAX;
    rep(i, n) minA = min(minA, abs(a[i]));
    ans -= minA*2;
  }

  out(ans);

  return 0;
}
