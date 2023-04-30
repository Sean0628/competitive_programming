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
  int n; ll x; cin >> n >> x;
  string s; cin >> s;

  stack<char> st;

  rep(i, n) {
    if (st.empty()) {
      st.push(s[i]);
      continue;
    }

    if (s[i] == 'U') {
      if (st.top() != 'U') {
        st.pop();
      } else {
        st.push(s[i]);
      }
    } else st.push(s[i]);
  }

  string t = "";
  while (!st.empty()) {
    t += st.top();
    st.pop();
  }

  reverse(t.begin(), t.end());

  rep(i, t.size()) {
    if (t[i] == 'U') {
      if (x%2 == 0) x /= 2;
      else x = (x-1)/2;
    } else if (t[i] == 'L') {
      x = x*2;
    } else {
      x = x*2 + 1;
    }
  }

  out(x);
  return 0;
}
