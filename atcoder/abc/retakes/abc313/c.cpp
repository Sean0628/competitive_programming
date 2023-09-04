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

const ll INF = 1e9;

int main() {
  int n; cin >> n;
  vector<ll> a(n);
  ll tot = 0;
  rep(i, n) {
    cin >> a[i];
    tot += a[i];
  }

  ll ave = tot / n, r = tot % n;
  vector<ll> b(n, ave);
  rep(i, r) b[i]++;

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ll ans = 0;
  rep(i, n) {
    ans += abs(a[i] - b[i]);
  }
  out(ans/2);

  return 0;
}
