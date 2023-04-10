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
void cyn(bool x) { cout << (x ? "YES" : "NO") << endl; }

int main() {
  string s; cin >> s;
  int n = s.size();
  reverse(s.begin(), s.end());

  vector<string> v;
  v.push_back("dreamer");
  v.push_back("dream");
  v.push_back("eraser");
  v.push_back("erase");

  rep(i, 4) reverse(v[i].begin(), v[i].end());

  bool ok = true;

  rep(i, n) {
    bool ok2 = false;
    rep(j, 4) {
      if (i + v[j].size() > n) continue;

      bool ok3 = true;
      rep(k, v[j].size()) {
        if (s[i+k] != v[j][k]) {
          ok3 = false;
          break;
        }
      }
      if (ok3) {
        ok2 = true;
        i += v[j].size() - 1;
        break;
      }
    }
    if (!ok2) {
      ok = false;
      break;
    }
  }

  cyn(ok);
  return 0;
}
