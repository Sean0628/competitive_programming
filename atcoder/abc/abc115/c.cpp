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
  int n,k; cin >> n >> k;
  vector<int> h(n);
  rep(i, n) cin >> h[i];

  sort(h.begin(), h.end());

  int ans = INT_MAX;
  k--;
  int l = 0, r = k;
  while (r < n) {
    ans = min(h[r]-h[l], ans);
    l++, r++;
  }

  out(ans);
  return 0;
}
