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
  int n; cin >> n;
  vector<int> a(n), mxl(n, 0), mxr(n, 0);
  rep(i, n) cin >> a[i];
  rep(i, n) {
    if (i == 0) mxl[i] = a[i];
    else mxl[i] = max(mxl[i-1], a[i]);
  }
  reverse(a.begin(), a.end());
  rep(i, n) {
    if (i == 0) mxr[i] = a[i];
    else mxr[i] = max(mxr[i-1], a[i]);
  }

  int d; cin >> d;
  rep(i, d) {
    int l, r; cin >> l >> r;
    l--; r++;

    int ans = max(mxl[l-1], mxr[n-r]);
    out(ans);
  }
  return 0;
}
