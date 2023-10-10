#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define loop(i, a, b) for (int i = (a); i < (b); ++i)
#define out(arg) cout << (arg) << endl
#define debug(x) cerr << #x << ": " << (x) << endl
#define debugv(x) cerr << #x << ": " << endl; for (auto& y : x) cerr << y << " "; cerr << endl;
#define debugvv(x) cerr << #x << ": " << endl; for (auto& y : x) { for (auto& z : y) cerr << z << " "; cerr << endl; }
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

using ll = long long;
using P = pair<int, int>;
using PLL = pair<ll, ll>;
using mint = modint1000000007;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;
const ll LINF = 1e18;

int main() {
  int n; cin >> n;
  vector<ll> h(n), s(n);
  rep(i, n) cin >> h[i] >> s[i];

  ll ng = 0, ok = LINF;
  while (ok - ng > 1) {
    ll mid = (ok + ng) / 2;

    vector<ll> lim(n);
    rep(i, n) lim[i] = (mid - h[i] + s[i]) / s[i] - 1;
    sort(all(lim));

    bool f = true;
    rep(i, n) if (lim[i] < i) f = false;

    if (f) ok = mid;
    else ng = mid;
  }

  out(ok);
  return 0;
}
