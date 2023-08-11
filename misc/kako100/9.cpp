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
  int m; cin >> m;
  vector<P> a(m);
  rep(i, m) cin >> a[i].first >> a[i].second;
  int n; cin >> n;
  set<P> st;
  vector<P> b(n);
  rep(i, n) {
    cin >> b[i].first >> b[i].second;
    st.insert(b[i]);
  }

  auto check = [&](int i) {
    int di = b[i].first - a[0].first;
    int dj = b[i].second - a[0].second;
    rep(j, m) {
      P c(a[j].first + di, a[j].second + dj);
      if (!st.count(c)) return P(-1, -1);
    }

    return P(di, dj);
  };

  rep(i, n) {
    P res = check(i);
    if (res.first != -1) {
      cout << res.first << " " << res.second << endl;
      return 0;
    }
  }

  return 0;
}
