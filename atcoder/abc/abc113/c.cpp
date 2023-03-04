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
  vector<vector<int>> vec(n);
  vector<int> p(m), y(m);
  rep(i, m) {
    cin >> p[i] >> y[i];
    p[i]--;
    vec[p[i]].emplace_back(y[i]);
  }

  rep(i, n) sort(vec[i].begin(), vec[i].end());

  rep(i, m) {

    printf("%06d%06d\n", p[i]+1, (int) (lower_bound(vec[p[i]].begin(), vec[p[i]].end(), y[i]) - vec[p[i]].begin()+1));
  }
  return 0;
}
