#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, m, b; cin >> n >> m >> b;
  vector<ll> a(n), c(m);

  ll tot_a = 0, tot_c = 0;
  rep(i, n) {
    cin >> a[i];
    tot_a += a[i];
  }
  rep(i, m) {
    cin >> c[i];
    tot_c += c[i];
  }

  ll tot = tot_a*m + tot_c*n + b*n*m;

  cout << tot << endl;
  return 0;
}
