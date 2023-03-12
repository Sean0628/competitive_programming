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

  vector<int> min_b(n);
  rep(i, n) min_b[i] = a[i] - (i+1);

  sort(min_b.begin(), min_b.end());

  int mid = n/2;
  int b = min_b[mid];

  ll ans = 0;

  rep(i, n) ans += abs(a[i] - (b+i+1));
  out(ans);
  return 0;
}
