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
  ll n, k; cin >> n >> k;

  ll tot = n*n*n;

  double yes = 0;
  yes = 1*1*1;
  yes += 3*1*1*(n-k);
  yes += 3*1*1*(k-1);
  yes += 6*(k-1)*(n-k);

  printf("%.10f\n", yes/tot);

  return 0;
}
