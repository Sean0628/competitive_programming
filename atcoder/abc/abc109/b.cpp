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
  vector<string> s(n);
  set<string> st;
  rep(i, n) {
    cin >> s[i];
    st.insert(s[i]);
  }

  bool ok = true;

  if (n != st.size()) ok = false;
  rep(i, n-1) {
    if (s[i].back() != s[i+1][0]) ok = false;
  }

  cyn(ok);

  return 0;
}
