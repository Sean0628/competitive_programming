#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }

int main() {
  int n; cin >> n;
  string s; cin >> s;

  string ans = "";
  rep(i, s.size()) {
    if (i < s.size() && s[i] == 'n' && s[i+1] == 'a') {
      ans += "nya";
      i++;
    } else ans += s[i];
  }

  cout << ans << endl;
  return 0;
}
