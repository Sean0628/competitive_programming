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
  int n = s.size();
  vector<string> ans(3);
  int idx = 0;
  rep(i, n) {
    if (s[i] == ',') {
      idx++;
      continue;
    }
    ans[idx] += s[i];
  }

  rep(i, 3) cout << ans[i] << " ";
  return 0;
}
