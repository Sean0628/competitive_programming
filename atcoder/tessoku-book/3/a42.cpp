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
  int n, k; cin >> n >> k;
  vector<P> a(n);
  rep(i, n) {
    int x, y; cin >> x >> y;
    a[i] = P(x, y);
  }

  auto getScore = [&](int x, int y) {
    int res = 0;
    rep(i, n) if (x <= a[i].first && a[i].first <= x + k && y <= a[i].second && a[i].second <= y + k) res++;

    return res;
  };

  int ans = 0;
  for (int i = 1; i <= 100; i++) {
    for (int j = 1; j <= 100; j++) {
      chmax(ans, getScore(i, j));
    }
  }

  out(ans);

  return 0;
}
