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
  set<char> st;
  st.insert('A');
  st.insert('C');
  st.insert('G');
  st.insert('T');

  string s; cin >> s;

  int cnt = 0, ans = 0;
  rep(i, s.size()) {
    if (st.count(s[i])) cnt++;
    else {
      ans = max(cnt, ans);
      cnt = 0;
    }
  }

  out(max(ans, cnt));

  return 0;
}
