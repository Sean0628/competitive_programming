#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

class UnionFind {
  public:
    vector<int> parent;
    vector<int> siz;

  void init(int n) {
    rep(i, n+1) parent.emplace_back(-1);
    rep(i, n+1) siz.emplace_back(1);
  }

  int root(int x) {
    while (true) {
      if (parent[x] == -1) break;
      x = parent[x];
    }

    return x;
  }

  void unite(int u, int v) {
    int r1 = root(u);
    int r2 = root(v);

    if (r1 == r2) return;

    if (siz[r1] < siz[r2]) {
      parent[r1] = r2;
      siz[r2] = siz[r1] + siz[r2];
    } else {
      parent[r2] = r1;
      siz[r1] = siz[r1] + siz[r2];
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
  sort(l.begin(), l.end());

  UnionFind uf;
  int ans = 0; uf.init(n);
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
