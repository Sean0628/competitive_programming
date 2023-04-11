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
  stack<char> st;

  rep(i, s.size()) {
    if (s[i] != 'B') st.push(s[i]);
    else if (!st.empty()) st.pop();
  }

  string ans = "";
  while (!st.empty()) {
    ans += st.top();
    st.pop();
  }

  reverse(ans.begin(), ans.end());
  out(ans);
  return 0;
}
