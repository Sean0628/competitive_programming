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
  int n, k; cin >> n >> k;
  k--;

  vector a(n, vector(3, int(0)));
  vector<int> tot(n);
  map<int, int> mp;
  rep(i, n) {
    rep(j, 3) {
      cin >> a[i][j];
      tot[i] += a[i][j];
      mp[i] = tot[i];
    }
  }

  vector<int> ctot(tot);

  sort(tot.rbegin(), tot.rend());

  rep(i, n) {
    cyn(ctot[i]+300 >= tot[k]);
  }

  return 0;
}
