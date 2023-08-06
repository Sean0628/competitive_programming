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

const int INF = 1e9;

int main() {
  int n, m; cin >> n >> m;
  vector<P> v(m);
  rep(i, m) {
    int a, b; cin >> a >> b;
    a--; b--;
    v[i] = {a, b};
  }

  int q; cin >> q;
  vector<vector<int>> query(q, vector<int>(3));
  vector<bool> canceled(m, false);

  rep(i, q) {
    int c, x, y = 0; cin >> c;
    if (c == 1) {
      cin >> x; x--;
      canceled[x] = true;
    } else {
      cin >> x >> y;
      x--; y--;
    }
    query[i] = {c, x, y};
  }
  dsu d(n);

  rep(i, m) {
    if (!canceled[i]) {
      int a = v[i].first, b = v[i].second;
      d.merge(a, b);
    }
  }

  reverse(query.begin(), query.end());

  vector<bool> ans;

  for (auto vec : query) {
    int c = vec[0];
    int x = vec[1];
    int y = vec[2];
    if (c == 1) {
      int a = v[x].first, b = v[x].second;
      d.merge(a, b);
    } else {
      ans.push_back(d.same(x, y));
    }
  }

  reverse(ans.begin(), ans.end());

  for (auto x : ans) {
    if (x) out("Yes");
    else out("No");
  }

  return 0;
}
