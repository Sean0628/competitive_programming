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

int main() {
  int d, n; cin >> d >> n;
  vector<int> t(d+1, 24);

  rep(i, n) {
    int l, r, h; cin >> l >> r >> h;

    for (int j = l; j <= r; j++) chmin(t[j], h);
  }

  ll ans = 0;
  for (int i = 1; i <= d; i++) ans += t[i];

  out(ans);
  return 0;
}
