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
  string s; cin >> s;
  int n; cin >> n;
  vector<string> t(n);
  rep(i, n) cin >> t[i];
  vector<pair<string, string>> v(n);

  map<char, int> mp;

  rep(i, s.size()) mp[s[i]] = i;

  rep(i, n) {
    string o = t[i];
    string tmp = "";
    rep(j, o.size()) {
      t[i][j] = 'a' + mp[o[j]];
    }
    v[i] = make_pair(t[i], o);
  }

  sort(v.begin(), v.end());

  rep(i, n) {
    out(v[i].second);
  }
  return 0;
}
