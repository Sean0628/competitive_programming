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
using mint = modint1000000007;

void chmax(ll& a, ll b) { a = max(a, b); }
void chmax(int& a, int b) { a = max(a, b); }
void chmin(ll& a, ll b) { a = min(a, b); }
void chmin(int& a, int b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

const int INF = 1e9;

int main() {
  int n, k, p; cin >> n >> k >> p;
  map<vector<int>, ll> dp;
  dp[vector<int> (k)] = 0;

  rep(i, n) {
    int c; cin >> c;
    vector<int> a(k); rep(j, k) cin >> a[j];

    auto old = dp;
    for (auto [_d, val] : old) {
      vector<int> nxt = _d;
      rep(j, k) nxt[j] = min(nxt[j] + a[j], p);
      if (dp.count(nxt)) chmin(dp[nxt], val + c);
      else dp[nxt] = val + c;
    }
  }

  vector<int> ans(k, p);
  if (dp.count(ans)) out(dp[ans]);
  else out(-1);
  return 0;
}
