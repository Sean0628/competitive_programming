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
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  string s; cin >> s;

  auto mex = [&](int i, int j, int k) {
    int s = 1<<i | 1<<j | 1<<k;
    int res = 0;
    while (s>>res & 1) res++;
    return res;
  };

  ll ans = 0;
  vector<int> m(3), x(3);
  rep(k, n) if (s[k] == 'X') x[a[k]]++;
  rep(j, n) {
    if (s[j] == 'E') {
      rep(i, 3) rep(k, 3) {
        ll now = (ll) m[i] * x[k];
        ans += now * mex(i, a[j], k);
      }
    } else if (s[j] == 'M') m[a[j]]++;
    else x[a[j]]--;
  }

  out(ans);
  return 0;
}
