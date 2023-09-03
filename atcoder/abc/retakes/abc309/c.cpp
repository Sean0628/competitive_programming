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
  int n, k; cin >> n >> k;
  vector<P> a(n);
  ll tot = 0;
  rep(i, n) {
    cin >> a[i].first >> a[i].second;
    tot += a[i].second;
  }

  sort(a.begin(), a.end());

  int ld = 0;
  for (auto [d, c] : a) {
    if (tot <= k) {
      out(ld+1);
      return 0;
    }

    tot -= c;
    ld = d;
  }

  out(ld+1);

  return 0;
}
