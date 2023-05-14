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

  map<char, int> mp;
  rep(i, t.size()) mp[t[i]]++;

  bool ok = true;

  rep(i, s.size()) {
    if (s[i] == '@') {
      bool ok2 = false;
      for (auto c : st) {
        if (mp[c] > 0) {
          mp[c]--;
          ok2 = true;
          break;
        }
      }
      if (!ok2) {
        if (mp['@'] > 0) mp['@']--;
        else ok = false;
      }
    } else {
      if (mp[s[i]] > 0) mp[s[i]]--;
      else {
        if (mp['@'] > 0 && st.count(s[i]) > 0) mp['@']--;
        else ok = false;
      }
    }
  }

  cyn(ok);
  return 0;
}
