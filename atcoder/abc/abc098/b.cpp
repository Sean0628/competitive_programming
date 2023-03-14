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
  string s; cin >> s;
  int ans = INT_MIN;

  rep(i, n) {
    vector<bool> a(26), b(26);

    int cnt = 0;
    rep(j, n) {
      if (j < i) a[s[j]-'a'] = true;
      else b[s[j]-'a'] = true;
    }

    rep(i, 26) if (a[i] && b[i]) cnt++;
    ans = max(cnt, ans);
  }

  out(ans);
  return 0;
}
