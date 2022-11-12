#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

class UnionFind {
  public:
    vector<int> p;
    vector<int> s;

  void init(int n) {
    rep(i, n+1) p.emplace_back(-1);
    rep(i, n+1) s.emplace_back(1);
  }

  int root(int x) {
    while (true) {
      if (p[x] == -1) break;
      x = p[x];
    }

    return x;
  }

  void unite(int u, int v) {
    int r1 = root(u);
    int r2 = root(v);

    if (r1 == r2) return;

    if (s[r1] < s[r2]) {
      p[r1] = r2;
      s[r2] = s[r1] + s[r2];
    } else {
      p[r2] = r1;
      s[r1] = s[r1] + s[r2];
    }
  }

  bool same(int u, int v) {
    return root(u) == root(v);
  }
};

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m), b(m), c(m);
  rep(i, m) cin >> a[i] >> b[i] >> c[i];

  vector<P> l;
  rep(i, m) l.emplace_back(make_pair(c[i], i));
  sort(l.begin(), l.end(), greater<P>());

  int ans = 0; UnionFind uf; uf.init(n);
  rep(i, l.size()) {
    int idx = l[i].second;
    if (!uf.same(a[idx], b[idx])) {
      uf.unite(a[idx], b[idx]);
      ans += c[idx];
    }
  }

  cout << ans << endl;
  return 0;
}
