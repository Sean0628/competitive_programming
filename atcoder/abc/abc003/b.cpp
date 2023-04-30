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
  string s, t; cin >> s >> t;
  set<char> st = {'a', 't', 'c', 'o', 'd', 'e', 'r'};;
  if (s.size() != t.size()) {
    out("You will lose");
    return 0;
  }

  rep(i, s.size()) {
    if (s[i] == t[i]) continue;
    if (s[i] == '@' && st.count(t[i])) continue;
    if (t[i] == '@' && st.count(s[i])) continue;

    out("You will lose");
    return 0;
  }

  out("You can win");
  return 0;
}
