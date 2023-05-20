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
  int n, q; cin >> n >> q;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> sum(n+1, 0);
  rep(i, n) sum[i+1] = sum[i] + a[i];

  rep(i, q) {
    int l, r; cin >> l >> r;
    out(sum[r] - sum[l-1]);
  }
  return 0;
}
