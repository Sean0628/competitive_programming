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
  int n, m; cin >> n >> m;

  map<int, int> mp;
  rep(i, n) {
    int k; cin >> k;
    vector<int> a(k);
    rep(i, k) {
      cin >> a[i];
      mp[a[i]]++;
    }
  }

  int ans = 0;

  for (auto p : mp) if (p.second == n) ans++;

  out(ans);
  return 0;
}
