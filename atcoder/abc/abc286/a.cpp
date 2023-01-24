#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  int n, p, q, r, s; cin >> n >> p >> q >> r >> s;
  p--, q--, r--, s--;

  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int idx = r;
  for (int i = p; i <= q; ++i) {
    swap(a[i], a[idx]);
    idx++;
  }

  rep(i, n) cout << a[i] << " ";

  return 0;
}
