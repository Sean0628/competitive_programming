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
  stack<char> st;

  rep(i, n) st.push(s[i]);

  int cnt = 0;
  while (st.size() > 1) {
    int n = st.top() - '0'; st.pop();
    char op = st.top(); st.pop();

    if (op == '*') {
      int m = st.top() - '0'; st.pop();
      int af = n * m;
      if (af > 0) af = 1;
      st.push(af + '0');
    } else {
      if (n != 0) cnt++;
    }
  }

  if (st.top() != '0') cnt++;

  out(cnt);

  return 0;
}
