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
  int n, k; cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  map<int, int> mp;
  rep(i, n) mp[a[i]]++;

  vector<P> b;
  for (auto p : mp) b.emplace_back(p.second, p.first);

  sort(b.rbegin(), b.rend());

  int ans = 0;
  rep(i, b.size()) {
    if (i < k) continue;

    ans += b[i].first;
  }

  out(ans);

  return 0;
}
