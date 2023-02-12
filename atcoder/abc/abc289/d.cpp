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
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int m; cin >> m;
  vector<int> b(m);
  rep(i, m) {
    cin >> b[i];
  }
  int x; cin >> x;

  vector<int> s(x+1, 0);

  rep(i, m) {
    s[b[i]] = -1;
  }

  rep(i, x+1) {
    if (i != 0 && s[i] == 0) continue;
    if (s[i] == -1) continue;
    rep(j, n) {
      if (i+a[j] <= x && s[i+a[j]] != -1) s[i+a[j]]++;
    }
  }
  cyn(s[x] > 0);

  return 0;
}
