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
  vector<char> c(n);
  rep(i, n) cin >> c[i];

  int a = 0, b = 0;
  rep(i, n) {
    if (c[i] == 'A') a++;
    else b++;
  }

  if (a>b) out("A");
  else if (a<b) out("T");
  else {
    int aa = 0, bb = 0;
    rep(i, n) {
      if (c[i] == 'A') aa++;
      else bb++;
      if (aa == a || bb == b) {
        if (aa > bb) out("A");
        else out("T");
        return 0;
      }
    }
  }
  return 0;
}
