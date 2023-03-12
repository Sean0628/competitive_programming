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
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  rep(i, n) a[i]--;
  vector<bool> b(n, false);

  rep(i, n) {
    if (b[i]) continue;

    b[a[i]] = true;
  }

  int tot = 0;
  rep(i, n) if (!b[i]) tot++;
  out(tot);
  rep(i, n) if (!b[i]) cout << i+1 << " ";
  return 0;
}
