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
  vector<pair<char, string>> v;

  rep(i, 3) {
    v.push_back(make_pair('W', "Do"));
    v.push_back(make_pair('B', "Do"));
    v.push_back(make_pair('W', "Re"));
    v.push_back(make_pair('B', "Re"));
    v.push_back(make_pair('W', "Mi"));
    v.push_back(make_pair('W', "Fa"));
    v.push_back(make_pair('B', "Fa"));
    v.push_back(make_pair('W', "So"));
    v.push_back(make_pair('B', "So"));
    v.push_back(make_pair('W', "La"));
    v.push_back(make_pair('B', "La"));
    v.push_back(make_pair('W', "Si"));
  }
  string s; cin >> s;

  rep(i, v.size()) {
    bool ok = true;
    for (int j = 0; j < s.size(); j++) {
      if (i+j >= v.size()) {
        ok = false;
        break;
      }
      if (v[i+j].first != s[j]) {
        ok = false;
        break;
      }
    }

    if (ok) {
      out(v[i].second);
      return 0;
    }
  }

  return 0;
}
