#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  string s, t; cin >> s >> t;

  int m = t.size();

  vector<bool> ans(m+1, true);
  rep(ri, 2) {
    bool ok = true;
    rep(i, m) {
      if (s[i] != t[i] && s[i] != '?' && t[i] != '?') ok = false;
      if (!ok) ans[i+1] = false;
    }

    reverse(s.begin(), s.end());
    reverse(t.begin(), t.end());
    reverse(ans.begin(), ans.end());
  }


  rep(i, m+1) cyn(ans[i]);

  return 0;
}
