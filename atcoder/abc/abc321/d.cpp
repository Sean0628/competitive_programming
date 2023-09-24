#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep2(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using ll = long long;
using P = pair<int, int>;
using mint = modint1000000007;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;

int main() {
  ll n, m, p; cin >> n >> m >> p;
  vector<ll> a(n); rep(i, n) cin >> a[i];
  vector<ll> b(m); rep(i, m) cin >> b[i];

  sort(all(b));

  vector<ll> sum(m+1, 0);
  rep(i, m) sum[i+1] = sum[i] + b[i];

  ll ans = 0;
  rep(i, n) {
    ll t = p - a[i];
    ll idx = lower_bound(all(b), t) - b.begin();
    ans += (m - idx) * p;
    ans += sum[min(idx, m)] + a[i] * idx;
  }

  out(ans);
  return 0;
}
