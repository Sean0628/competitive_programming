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
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int cnt = 0;
  for (int i = 1; i+1 < n; ++i) {
    if (a[i-1] < a[i] && a[i] < a[i+1]) cnt++;
    else if (a[i-1] > a[i] && a[i] > a[i+1]) cnt++;
  }

  out(cnt);
  return 0;
}
