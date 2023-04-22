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

  if (tot % n != 0) {
    out(-1);
    return 0;
  }
  int m = tot/n;

  int cnt = 0;
  rep(i, n-1) {
    if (a[i] == m) continue;

    if (a[i] > m) {
      a[i+1] += a[i] - m;
      a[i] = m;
      cnt++;
    } else {
      a[i+1] -= m - a[i];
      a[i] = m;
      cnt++;
    }
  }

  out(cnt);
  return 0;
}
