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
  vector<int> a(m), b(m);
  rep(i, m) {
    cin >> a[i] >> b[i];
    a[i]--, b[i]--;
  }

  int q; cin >> q;
  vector<int> c(q), d(q), e(q);
  vector<int> dl(n, false);
  rep(i, q) {
    cin >> c[i];
    if (c[i] == 1) { cin >> d[i]; d[i]--; dl[d[i]] = true; }
    else { cin >> d[i] >> e[i]; d[i]--, e[i]--; }
  }

  dsu uf(n);
  rep(i, m) if (!dl[i]) uf.merge(a[i], b[i]);
  vector<bool> ans;
  for (int i = q-1; i >= 0; --i) {
    if (c[i] == 1) {
      int idx = d[i];
      uf.merge(a[idx], b[idx]);
    } else {
      ans.push_back(uf.same(d[i], e[i]));
    }
  }

  reverse(ans.begin(), ans.end());
  for (auto x : ans) cyn(x);

  return 0;
}

