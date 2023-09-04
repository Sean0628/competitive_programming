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
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  string s; cin >> s;

  vector<string> st; // stack
  st.push_back("");
  for (char c : s) {
    if (c == '(') {
      st.push_back("(");
    } else if (c == ')') {
      if (st.size() == 1) st.back() += c;
      else st.pop_back();
    } else st.back() += c;
  }

  string ans = "";
  for (string t : st) ans += t;
  out(ans);
  return 0;
}
