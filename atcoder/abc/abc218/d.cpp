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
  vector<P> a(n);

  set<P> st;
  rep(i, n) {
    int x, y; cin >> x >> y;
    a[i] = {x, y};
    st.insert({x, y});
  }

  int cnt = 0;
  rep(i, n) {
    rep(j, n) {
      if (i == j) continue;
      if (a[i].first >= a[j].first || a[i].second >= a[j].second) continue;

      P p2 = {a[i].first, a[j].second};
      P p3 = {a[j].first, a[i].second};

      if (st.count(p2) && st.count(p3)) cnt++;
    }
  }

  out(cnt);
  return 0;
}
