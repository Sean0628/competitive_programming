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
  int k; cin >> k;

  int n = s.size();
  map<char, bool> mp;
  rep(i, n) mp[s[i]] = true;

  set<string> st;
  for (auto p : mp) {
    char c = p.first;
    rep(i, n) {
      if (s[i] == c) {
        for (int j = 1; j <= 5; ++j) {
          st.insert(s.substr(i, j));
        }
      }
    }

    if (st.size() >= 5) break;
  }

  int idx = 1;
  for (auto i : st) {
    if (idx == k) {
      out(i);
      return 0;
    }

    idx++;
  }
  return 0;
}
