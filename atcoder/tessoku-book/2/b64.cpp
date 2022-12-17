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
  rep(i, m) {
    int a, b, c; cin >> a >> b >> c;
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

  vector<int> ans;
  int p = n;

  while (true) {
    ans.emplace_back(p);

    if (p == 1) break;

    rep(i, to[p].size()) {
      int prev = to[p][i].first;
      int cost = to[p][i].second;

      if (cur[prev] + cost == cur[p]) {
        p = prev;
        break;
      }
    }
  }

  reverse(ans.begin(), ans.end());

  rep(i, ans.size()) cout << ans[i] << " ";
  cout << endl;
  return 0;
}
