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
void cyn(bool x) { cout << (x ? "First" : "Second") << endl; }

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  auto getCnt = [&](int al, int bl) {
    int cnt = 0;
    rep(i, n) {
      if (al <= a[i] && a[i] <= al+k && bl <= b[i] && b[i] <= bl+k) cnt++;
    }
    return cnt;
  };

  int mx = 0;
  for (int i = 0; i <= 100; ++i) {
    for (int j = 0; j <= 100; ++j) {
      chmax(mx, getCnt(i, j));
    }
  }

  out(mx);
  return 0;
}
