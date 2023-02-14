#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define out(arg) cout << (arg) << endl
using ll = long long;
using P = pair<int, int>;
void chmax(ll& a, ll b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  int n; cin >> n;
  vector<P> a(n), b(n);
  rep(i, n) {
    cin >> a[i].first;
    a[i].second = i;
  }

  b = a;

  sort(b.begin(), b.end());
  reverse(b.begin(), b.end());
  rep(i, n) {
    rep(j, n) {
      if (b[j] == a[i]) continue;
      out(b[j].first);
      break;
    }
  }

  return 0;
}
