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

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> to(n);

  rep(i, m) {
    int a, b; cin >> a >> b;
    a--, b--;

    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<int> seen(n, 0);
  stack<int> st, res;
  auto dfs = [&](auto self, int v) -> void {
    if (v == n-1) { res = st; return; }

    seen[v] = 1;
    for (auto nv : to[v]) {
      if (seen[nv]) continue;
      st.push(nv);
      self(self, nv);
      st.pop();
    }
  };

  st.push(0);
  dfs(dfs, 0);

  vector<int> ans;
  while (!res.empty()) {
    ans.push_back(res.top());
    res.pop();
  }

  reverse(ans.begin(), ans.end());
  for (auto v : ans) cout << v+1 << " ";
  cout << endl;
  return 0;
}
