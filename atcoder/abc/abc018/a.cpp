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
  vector<P> a(3);
  rep(i, 3) {
    int x; cin >> x;
    a[i] = {x, i};
  }

  sort(a.rbegin(), a.rend());

  vector<int> ans(3);

  rep(i, 3) {
    ans[a[i].second] = i+1;
  }

  rep(i, 3) out(ans[i]);

  return 0;
}
