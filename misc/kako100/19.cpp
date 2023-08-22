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
  int d; cin >> d;
  int n; cin >> n;
  int m; cin >> m;
  vector<int> D(n+1);
  D[0] = 0;
  D[n] = d;
  rep(i, n-1) cin >> D[i];
  vector<int> k(m);
  rep(i, m) cin >> k[i];

  sort(D.begin(), D.end());

  ll ans = 0;
  rep(i, m) {
    int idx = lower_bound(D.begin(), D.end(), k[i]) - D.begin();
    int left = D[idx] - k[i];
    int right = k[i] - D[idx-1];
    ans += min(left, right);
  }

  out(ans);
  return 0;
}
