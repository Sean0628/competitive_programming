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

  vector<P> tmp;

  rep(i, n) tmp.push_back(P(to[i].size(), i));

  sort(tmp.begin(), tmp.end(), greater<P>());

  out(tmp[0].second+1);
  return 0;
}
