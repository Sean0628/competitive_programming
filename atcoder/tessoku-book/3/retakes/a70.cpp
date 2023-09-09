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
void cyn(bool x) { cout << (x ? "First" : "Second") << endl; }

const int INF = 1e9;

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

  auto getNext = [&](int pos, int idx) {
    vector<int> state(n);
    rep(i, n) state[i] = (pos>>i)&1;

    state[x[idx]] = !state[x[idx]];
    state[y[idx]] = !state[y[idx]];
    state[z[idx]] = !state[z[idx]];

    int res = 0;
    rep(i, n) res += state[i] * (1<<i);
    return res;
  };

  rep(i, 1<<n) {
    rep(j, m) {
      int next = getNext(i, j);
      to[i].push_back(next);
    }
  }

  int start = 0;
  rep(i, n) start += a[i] * (1<<i);
  int goal = (1<<n) - 1;

  // BFS
  vector<int> dist(1<<n, INF);
  queue<int> q;
  dist[start] = 0;
  q.push(start);

  while (!q.empty()) {
    int pos = q.front(); q.pop();
    for (auto next : to[pos]) {
      if (dist[next] != INF) continue;
      dist[next] = dist[pos] + 1;
      q.push(next);
    }
  }

  if (dist[goal] == INF) out(-1);
  else out(dist[goal]);
  return 0;
}
