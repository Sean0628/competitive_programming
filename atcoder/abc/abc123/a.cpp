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
void cyn(bool x) { cout << (x ? "Yay! " : ":(") << endl; }

int main() {
  vector<int> a(5);
  rep(i, 5) cin >> a[i];
  int k; cin >> k;
  bool ok = true;

  rep(i, 5) {
    for (int j = i+1; j < 5; ++j) {
      if (a[j]-a[i] > k) ok = false;
    }
  }

  cyn(ok);
  return 0;
}
