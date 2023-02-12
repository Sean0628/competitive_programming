#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n, m; cin >> n >> m;
  vector<int> a(m), b(n);
  set<int> st;
  rep(i,m) {
    cin >> a[i];
    a[i]--;
    st.insert(a[i]);
  }

  rep(i, n) b[i] = i;

  sort(a.begin(), a.end());

  vector<vector<int>> g(n);
  int idx = 0;
  rep(i, n) {
    if (st.count(i)) {
      g[idx].emplace_back(b[i]);
    } else {
      g[idx].emplace_back(b[i]);
      idx++;
    }
  }

  vector<int> ans;
  rep(i, g.size()) {
    sort(g[i].begin(), g[i].end());
    reverse(g[i].begin(), g[i].end());
    for (int e : g[i]) ans.push_back(e);
  }

  rep(i, n) cout << ans[i]+1 << " ";
  cout << endl;
  return 0;
}
