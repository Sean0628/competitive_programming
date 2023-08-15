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
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  ll ans = LLONG_MAX;
  rep(bits, 1<<n) {
    ll sum = 0;
    int prev = 0, cnt = 0;

    rep(i, n) {
      int curr = a[i];
      if (bits & (1 << i)) {
        if (prev >= a[i]) {
          ll tmp = prev - a[i] + 1;
          sum += tmp;
          curr += tmp;
        }
      }

      if (prev < curr) cnt++;
      chmax(prev, curr);
    }

    if (cnt >= k) chmin(ans, sum);
  }

  out(ans);
  return 0;
}
