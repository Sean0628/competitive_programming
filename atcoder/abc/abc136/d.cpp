#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  string s; cin >> s;
  int n = s.size();
  vector<int> ans(n);
  rep(ri, 2) {
    int cnt = 0;
    rep(i, n) {
      if (s[i] == 'R') cnt++;
      else {
        ans[i] += cnt/2;
        ans[i-1] += (cnt+1)/2;
        cnt = 0;
      }
    }

    reverse(ans.begin(), ans.end());
    reverse(s.begin(), s.end());
    rep(i, n) {
      if (s[i] == 'L') s[i] = 'R';
      else s[i] = 'L';
    }
  }
  rep(i, n) printf("%i ", ans[i]);

  return 0;
}
