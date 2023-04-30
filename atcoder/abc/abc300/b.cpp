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
  int h, w; cin >> h >> w;
  vector<string> a(h);
  rep(i, h) cin >> a[i];
  vector<string> b(h);
  rep(i, h) cin >> b[i];

  rep(i, h) {
    rep(j, w) {
      vector<string> t(h);
      for (int x = i; x < h+i; x++) {
        for (int y = j; y < w+j; y++) {
          t[x-i] += b[x%h][y%w];
        }

      }
      if (t == a) {
        out("Yes");
        return 0;
      }
    }
  }

  out("No");

  return 0;
}
