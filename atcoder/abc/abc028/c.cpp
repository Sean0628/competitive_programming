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
void chmin(ll& a, ll b) { a = min(a, b); }
void cyn(bool x) { cout << (x ? "Yes" : "No") << endl; }

int main() {
  vector<int> a(5);
  rep(i, 5) cin >> a[i];

  vector<int> b;
  rep(i, 1<<5) {
    if (__builtin_popcount(i) == 3) {
      int sum = 0;
      rep(j, 5) {
        if (i & (1<<j)) sum += a[j];
      }
      b.push_back(sum);
    }
  }

  sort(b.rbegin(), b.rend());

  out(b[2]);
  return 0;
}
