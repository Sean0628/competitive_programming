#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
using mint = modint998244353;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const ll INF = 1e18;

int main() {
  int n, m; cin >> n >> m;

  vector<int> deg(n);
  rep(i, m) {
    int a, b; cin >> a >> b;
    a--; b--;
    deg[b]++;
  }

  int ans = -1;
  rep(i, n) {
    if (deg[i] == 0) {
      if (ans != -1) {
        out(-1);
        return 0;
      } else {
        ans = i+1;
      }
    }
  }

  out(ans);
  return 0;
}
