#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;

  vector<vector<P>> to(n+1);

  int a, b, c;
  rep(i, m) {
    cin >> a >> b >> c;
    to[a].emplace_back(make_pair(b, c));
    to[b].emplace_back(make_pair(a, c));
  }

  vector<bool> fixed(n+1);
  vector<int> cur(n+1, INT_MAX);
  priority_queue<P, vector<P>, greater<P>> que;

  cur[1] = 0;
  que.push(make_pair(cur[1], 1));

  // dijkstra's
  while (!que.empty()) {
    int pos = que.top().second; que.pop();

    if (fixed[pos]) continue;

    fixed[pos] = true;

    rep(i, to[pos].size()) {
      int next = to[pos][i].first;
      int cost = to[pos][i].second;

      if (cur[next] > cur[pos] + cost) {
        cur[next] = cur[pos] + cost;
        que.push(make_pair(cur[next], next));
      }
    }
  }

  for (int i = 1; i <= n; ++i) {
    if (cur[i] == INT_MAX) cout << -1 << endl;
    else cout << cur[i] << endl;
  }

  return 0;
}
