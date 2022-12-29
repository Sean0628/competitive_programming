#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> x(m), y(m), z(m);
  rep(i, m) {
    cin >> x[i] >> y[i] >> z[i];
    x[i]--, y[i]--, z[i]--;
  }

  vector<vector<int>> to(1<<n);

  auto GetNext = [&](int pos, int idx) {
    vector<int> state(n);

    rep(i, n) state[i] = (pos>>i&1);

    state[x[idx]] = !state[x[idx]];
    state[y[idx]] = !state[y[idx]];
    state[z[idx]] = !state[z[idx]];

    int ret = 0;
    rep(i, n) {
      if (state[i] == 1) ret += (1<<i);
    }

    return ret;
  };

  rep(i, 1<<n) {
    rep(j, m) {
      int next_state = GetNext(i, j);
      to[i].emplace_back(next_state);
    }
  }

  int start = 0;
  int goal = (1<<n)-1;
  rep(i, n) {
    if (a[i] == 1) start += (1<<i);
  }

  queue<int> que;
  vector<int> dist(1<<n, -1);

  dist[start] = 0;
  que.push(start);

  while (!que.empty()) {
    int pos = que.front(); que.pop();
    rep(i, to[pos].size()) {
      int next = to[pos][i];
      if (dist[next] == -1) {
        dist[next] = dist[pos] + 1;
        que.push(next);
      }
    }
  }

  cout << dist[goal] << endl;
  return 0;
}
