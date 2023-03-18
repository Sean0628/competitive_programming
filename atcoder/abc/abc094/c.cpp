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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<int> a(n);
  vector<P> b;
  rep(i, n) {
    cin >> a[i];
    b.emplace_back(a[i], i);
  }

  sort(b.begin(), b.end());

  vector<int> ans(n);
  int k = n/2;
  rep(i, n) {
    if (i < k) ans[b[i].second] = b[k].first;
    else ans[b[i].second] = b[k-1].first;
  }

  rep(i, n) out(ans[i]);
  return 0;
}
