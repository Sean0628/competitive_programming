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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  int s, t; cin >> s >> t;
  int k; cin >> k;
  vector<int> p(k);
  rep(i, k) cin >> p[i];

  set<int> st;

  st.insert(s);
  st.insert(t);

  rep(i, k) {
    if (st.count(p[i])) {
      out("NO");
      return 0;
    }
    st.insert(p[i]);
  }

  out("YES");
  return 0;
}
