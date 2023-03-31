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

vector<ll> lucas() {
  vector<ll> res(100);
  res[0] = 2, res[1] = 1;
  for (int i = 2; i < 100; i++) {
    res[i] = res[i-1] + res[i-2];
  }
  return res;
}

int main() {
  int n; cin >> n;
  vector<ll> L = lucas();
  out(L[n]);

  return 0;
}
