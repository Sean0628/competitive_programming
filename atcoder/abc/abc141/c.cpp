#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, k, q; cin >> n >> k >> q;
  vector<int> a(q), p(n);
  rep(i, q) {
    cin >> a[i];
    a[i]--;

    p[a[i]]++;
  }

  rep(i, n) {
    cyn(k > q-p[i]);
  }
  return 0;
}
