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
  string s; cin >> s;
  int m; cin >> m;
  m--;
  int n = s.size();
  vector<string> ans;
  rep(i, n) {
    rep(j, n) {
      string t = "";
      t += s[i];
      t += s[j];
      ans.emplace_back(t);
    }
  }

  sort(ans.begin(), ans.end());

  out(ans[m]);
  return 0;
}
