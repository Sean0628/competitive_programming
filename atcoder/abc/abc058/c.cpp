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
  vector<map<char, int>> v;
  int n; cin >> n;
  set<char> st;
  rep(i, n) {
    string s; cin >> s;
    map<char, int> m;
    for (char c : s) {
      m[c]++;
      st.insert(c);
    }
    v.push_back(m);
  }

  string ans = "";
  for (char c : st) {
    int mn = 100;
    for (auto m : v) {
      mn = min(mn, m[c]);
    }
    rep(i, mn) ans += c;
  }

  sort(ans.begin(), ans.end());
  out(ans);
  return 0;
}
