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

int main() {
  ll n, w; cin >> n >> w;
  vector<ll> T(2*1e5+1);

  rep(i, n) {
    ll s, t, p; cin >> s >> t >> p;
    T[s] += p;
    T[t] -= p;
  }

  rep(i, 2*1e5) T[i+1] += T[i];
  bool ok = true;

  rep(i, 2*1e5+1) {
    if (T[i] > w) ok = false;
  }

  cyn(ok);
  return 0;
}
