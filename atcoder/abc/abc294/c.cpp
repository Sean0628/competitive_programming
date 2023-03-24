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
  int n, m; cin >> n >> m;
  vector<int> a(n), b(m), c;
  rep(i, n) {
    cin >> a[i];
    c.emplace_back(a[i]);
  }
  rep(i, m) {
    cin >> b[i];
    c.emplace_back(b[i]);
  }

  sort(c.begin(), c.end());

  rep(i, n) {
    int pos = lower_bound(c.begin(), c.end(), a[i]) - c.begin();
    cout << pos+1 << " ";
  }
  cout << endl;

  rep(i, m) {
    int pos = lower_bound(c.begin(), c.end(), b[i]) - c.begin();
    cout << pos+1 << " ";
  }
  cout << endl;

  return 0;
}
