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
  int n, q; cin >> n >> q;

  UnionFind uf;
  uf.init(n);

  rep(i, q) {
    int c, u, v; cin >> c >> u >> v;
    if (c == 1) {
      uf.unite(u, v);
    } else {
      if (uf.same(u, v)) cout << "Yes" << endl;
      else cout << "No" << endl;
    }
  }

  return 0;
}
