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
  vector<P> a(n);
  rep(i, n) {
    int x, y; cin >> x >> y;
    a[i] = make_pair(y, x);
  }

  sort(a.rbegin(), a.rend());

  int f = a[0].second;
  P same, diff = make_pair(-1, -1);

  int idx = 1;
  while (idx < n) {
    if (a[idx].second == f) {
      same = a[idx];
      break;
    }
    idx++;
  }

  idx = 1;
  while (idx < n) {
    if (a[idx].second != f) {
      diff = a[idx];
      break;
    }
    idx++;
  }


  int ans = max(a[0].first + same.first/2, a[0].first + diff.first);

  out(ans);

  return 0;
}
