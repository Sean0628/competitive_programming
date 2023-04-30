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

  map<int, vector<P>> mp;
  rep(i, n) {
    int x, y; cin >> x >> y;
    mp[y].push_back(P(x, i));
  }

  string s; cin >> s;

  bool ok = false;
  for (auto p : mp) {
    sort(p.second.begin(), p.second.end());

    for (int i = 0; i < p.second.size()-1; i++) {
      if (s[p.second[i].second] == 'R' && s[p.second[i+1].second] == 'L') {
        ok = true;
        break;
      }
    }
  }

  cyn(ok);
  return 0;
}

