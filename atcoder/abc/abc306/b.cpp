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
  vector<int> a(64);
  rep(i, 64) cin >> a[i];

  vector<unsigned long long> pow2(64);
  pow2[0] = 1;
  rep(i, 63) pow2[i+1] = pow2[i] * 2;

  unsigned long long ans = 0;
  rep(i, 64) {
    if (a[i] == 0) continue;

    ans += pow2[i];
  }

  out(ans);

  return 0;
}
