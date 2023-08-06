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
  vector<vector<P>> to(n);
  vector<int> a(m), b(m), c(m);
  rep(i, m) {
    cin >> a[i] >> b[i] >> c[i];
    a[i]--, b[i]--;
    to[a[i]].push_back({c[i], b[i]});
    to[b[i]].push_back({c[i], a[i]});
  }

  // dijkstra's algorithm
  vector<bool> fixed(n);
  vector<int> curr(n, INF);
  priority_queue<P, vector<P>, greater<P>> q;

  curr[0] = 0;
  q.push({curr[0], 0});

  while (!q.empty()) {
    int v = q.top().second; q.pop();
    if (fixed[v]) continue;
    fixed[v] = true;

    for (auto nv : to[v]) {
      int cost = nv.first;
      int next = nv.second;
      if (curr[next] <= curr[v] + cost) continue;

      curr[next] = curr[v] + cost;
      q.push({curr[next], next});
    }
  }

  // restoration
  vector<int> ans;
  int pos = n - 1;
  while (pos >= 0) {
    ans.push_back(pos+1);
    if (pos == 0) break;

    for (auto nv : to[pos]) {
      int cost = nv.first;
      int next = nv.second;
      if (curr[pos] == curr[next] + cost) {
        pos = next;
        break;
      }
    }
  }

  reverse(ans.begin(), ans.end());

  for (auto v : ans) cout << v << " ";

  return 0;
}
