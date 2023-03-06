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
  string s, t; cin >> s >> t;

  bool ok = true;
  rep(i, s.size()) {
    int a = s[i] - 'a';
    int b = t[i] - 'a';

    if (start[a] != -1 || goal[b] != -1) {
      if (start[a] != b || goal[b] != a) {
        ok = false;
        break;
      }
    } else {
      start[a] = b;
      goal[b] = a;
    }
  }
  cyn(ok);
  return 0;
}
