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
    int l, r; cin >> l >> r;
    a[i] = P(r, l);
  }

  sort(a.begin(), a.end());

  int cnt = 0, last = -1;
  rep(i, n) {
    if (i == 0) {
      cnt++;
      last = a[i].first;
      continue;
    }

    int l, r; tie(r, l) = a[i];

    if (l >= last) {
      cnt++;
      last = r;
    }
  }

  out(cnt);

  return 0;
}
