#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, m; cin >> n >> m;
  vector<vector<P>> to(n+1);
  rep(i, m) {
    ll a, b, c, d; cin >> a >> b >> c >> d;
    c *= 10'000LL;

    if (d == 1) {
      to[a].emplace_back(make_pair(b, c - 1LL));
      to[b].emplace_back(make_pair(a, c - 1LL));
    } else {
      to[a].emplace_back(make_pair(b, c));
      to[b].emplace_back(make_pair(a, c));
    }
  }

  vector<bool> fixed(n+1);
  vector<ll> cur(n+1, LONG_MAX);
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

  int dist = (cur[n] + 9999LL) / 10'000LL;
  int tree = dist*10'000LL - cur[n];

  cout << dist << " " << tree << endl;

  return 0;
}
