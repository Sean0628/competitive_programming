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
  int tot = 0;
  rep(i, n) {
    cin >> a[i];
    tot += a[i];
  }

  sort(a.begin(), a.end());

  rep(i, n) {
    if (tot % 10 != 0) break;

    if ((tot - a[i])% 10 != 0) {
      tot -= a[i];
      break;
    }
  }

  if (tot % 10 == 0) tot = 0;
  out(tot);

  return 0;
}
