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
  int t, n, m; cin >> t >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  cin >> m;
  vector<int> b(m);
  rep(i, m) cin >> b[i];

  bool ok = true;
  int j = 0;
  rep(i, m) {
    bool ok2 = false;

    for (; j < n; j++) {
      if (a[j] <= b[i] && b[i] <= a[j]+t) {
        ok2 = true;
        j++;
        break;
      }
    }
    if (!ok2) {
      ok = false;
      break;
    }
  }

  if (ok) out("yes");
  else out("no");
  return 0;
}
