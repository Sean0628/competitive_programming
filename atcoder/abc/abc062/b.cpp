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
  int h, w; cin >> h >> w;
  vector<string> s(h);
  rep(i, h) cin >> s[i];

  rep(i, h+2) {
    rep(j, w+2) {
      if (i == 0 || i == h+1 || j == 0 || j == w+1) {
        cout << "#";
      } else {
        cout << s[i-1][j-1];
      }
    }
    cout << endl;
  }
  return 0;
}
