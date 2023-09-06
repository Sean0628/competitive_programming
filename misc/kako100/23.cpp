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

const ll INF = 1e18;

int main() {
  int n, m; cin >> n >> m;
  vector<ll> p(n+1); // extra space for 0
  rep(i, n) cin >> p[i];

  vector<ll> v;
  rep(i, n+1) {
    rep(j, n+1) {
      v.push_back(p[i] + p[j]);
    }
  }

  sort(v.begin(), v.end());
  v.erase(unique(v.begin(), v.end()), v.end());

  rep(i, v.size()) cout << v[i] << endl;

  ll res = 0;
  rep(i, v.size()) {
    ll sum = v[i];
    if (sum > m) continue;
    int idx = upper_bound(v.begin(), v.end(), m - sum) - v.begin();
    if (idx == 0) continue;

    chmax(res, sum + v[idx-1]);
  }

  out(res);

  return 0;
}
