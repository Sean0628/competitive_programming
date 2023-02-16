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
  vector<int> d(n);
  rep(i, n) cin >> d[i];

  sort(d.begin(), d.end());
  int cnt = 0;
  if (d[n/2-1] == d[n/2]) cnt = 0;
  else cnt = d[n/2] - d[n/2-1];
  out(cnt);
  return 0;
}
