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

const ll INF = 1e18;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  vector<int> p(n);
  iota(p.begin(), p.end(), 0);

  stable_sort(p.begin(), p.end(), [&](int i, int j) {
      return (ll) a[i] * (a[j] + b[j]) > (ll) a[j] * (a[i] + b[i]);
  });


  rep(i, n) out(p[i]+1);

  return 0;
}
