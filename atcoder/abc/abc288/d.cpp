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
  int n, k; cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector s(k, vector<ll> (n+1));
  rep(i, n) s[i%k][i+1] = a[i];
  rep(i, k) rep(j, n) s[i][j+1] += s[i][j];

  int q; cin >> q;
  rep(qi, q) {
    int l, r; cin >> l >> r;
    --l;
    vector<ll> ns(k);
    rep(i, k) ns[i] = s[i][r] - s[i][l];

    sort(ns.begin(), ns.end());

    cyn(ns[0] == ns.back());
  }
  return 0;
}
