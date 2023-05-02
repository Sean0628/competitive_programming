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
  int n, m; cin >> n >> m;
  map<int, int> mp;
  dsu d(n);
  bool ok = true;

  rep(i, m) {
    int a, b; cin >> a >> b;
    a--; b--;
    mp[a]++;
    mp[b]++;

    if (d.same(a, b)) ok = false;
    d.merge(a, b);
  }

  for (auto [k, v] : mp) {
    if (v > 2) {
      ok = false;
      break;
    }
  }

  cyn(ok);
  return 0;
}
