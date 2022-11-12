#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

struct Edge {
  int to, cap, rev;
};

class MaximumFlow {
  public:
    int size_ = 0;
    bool used[409];
    vector<Edge> g[409];

    void init(int n) {
      size_ = n;
      for (int i = 0; i <= size_; ++i) g[i].clear();
    }

    void add_edge(int a, int b, int c) {
      int curr_ga = g[a].size();
      int curr_gb = g[b].size();

      g[a].emplace_back(Edge{ b, c, curr_gb });
      g[b].emplace_back(Edge{ a, 0, curr_ga });
    }

    int dfs(int pos, int goal, int f) {
      if (pos == goal) return f;

      used[pos] = true;
      rep(i, g[pos].size()) {
        if (g[pos][i].cap == 0) continue;

        if (used[g[pos][i].to]) continue;

        int flow = dfs(g[pos][i].to, goal, min(f, g[pos][i].cap));

        if (flow >= 1) {
          g[pos][i].cap -= flow;
          g[g[pos][i].to][g[pos][i].rev].cap += flow;

          return flow;
        }
      }

      return 0;
    }

    int max_flow(int s, int t) {
      int total_flow = 0;
      while (true) {
        for (int i = 0; i <= size_; ++i) used[i] = false;
        int f = dfs(s, t, INT_MAX);

        if (f == 0) break;
        total_flow += f;
      }

      return total_flow;
    }
};

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m), b(m), c(m);
  rep(i, m) cin >> a[i] >> b[i] >> c[i];

  MaximumFlow mf;
  mf.init(n);

  rep(i, m) {
    mf.add_edge(a[i], b[i], c[i]);
  }

  cout << mf.max_flow(1, n) << endl;
  return 0;
}
