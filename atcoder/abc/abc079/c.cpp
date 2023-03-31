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
  vector<int> a(4);
  rep(i, 4) a[i] = s[i] - '0';

  rep(i, 1<<3) {
    int tot = a[0];
    rep(j, 3) {
      if (i & (1<<j)) tot += a[j+1];
      else tot -= a[j+1];
    }

    if (tot == 7) {
      rep(j, 3) {
        if (i & (1<<j)) cout << a[j] << "+";
        else cout << a[j] << "-";
      }
      cout << a[3] << "=7" << endl;
      return 0;
    }
  }
  return 0;
}
