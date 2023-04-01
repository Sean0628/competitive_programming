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
  string s, t; cin >> s >> t;
  int n = s.size();
  int m = t.size();

  vector<string> c;

  for (int i = 0; i < n-m+1; i++) {
    string tmp = s;

    for (int j = 0; j < m; j++) {
      if (tmp[i+j] == '?') tmp[i+j] = t[j];
      else if (tmp[i+j] != t[j]) break;
      if (j == m-1) c.push_back(tmp);
    }
  }

  if (c.size() == 0) out("UNRESTORABLE");
  else {
    sort(c.begin(), c.end());
    rep(i, n) {
      if (c[0][i] == '?') c[0][i] = 'a';
    }
    out(c[0]);
  }

  return 0;
}
