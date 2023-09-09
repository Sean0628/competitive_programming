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

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> to(n);
  rep(i, m) {
    int a, b; cin >> a >> b;
    a--; b--;
    to[a].push_back(b);
    to[b].push_back(a);
  }

  vector<bool> used(n, false);
  vector<int> st; // stack

  auto dfs = [&](auto dfs, int v) -> void {
    used[v] = true;
    st.push_back(v+1);

    if (v == n-1) {
      for (auto v : st) out(v);
      exit(0);
    }

    for (auto nv : to[v]) {
      if (used[nv]) continue;
      dfs(dfs, nv);
      if (st.size()) st.pop_back();
    }
  };

  dfs(dfs, 0);


  return 0;
}
