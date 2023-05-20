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
  int t, n; cin >> t >> n;
  vector<int> a(t+1);

  rep(i, n) {
    int l, r; cin >> l >> r;
    a[l]++, a[r]--;
  }
  rep(i, t+1) a[i+1] += a[i];

  rep(i, t) out(a[i]);

  return 0;
}
