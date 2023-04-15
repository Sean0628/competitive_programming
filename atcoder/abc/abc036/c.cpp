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

  vector<int> b(a);

  sort(b.begin(), b.end());
  map<int, int> mp;

  int m = 0;
  rep(i, n) {
    if (0 < i && b[i] != b[i-1]) m++;

    mp[b[i]] = m;
  }

  rep(i, n) out(mp[a[i]]);

  return 0;
}
