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
  int n; cin >> n;
  set<P> st;
  vector<P> ps;
  rep(i, n) {
    int a, b; cin >> a >> b;
    ps.push_back(P(a, b));
    st.insert(P(a, b));
  }

  int mx = 0;
  rep(i, n) rep(j, n) if (i != j) {
    P a = ps[i], b = ps[j];

    int di = b.first - a.first;
    int dj = b.second - a.second;

    P c(b.first - dj, b.second + di);
    P d(c.first - di, c.second - dj);

    if (st.count(c) && st.count(d)) {
      int area = di * di + dj * dj;
      chmax(mx, area);
    }
  }

  out(mx);
  return 0;
}
