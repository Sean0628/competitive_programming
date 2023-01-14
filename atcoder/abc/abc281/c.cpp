#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, t; cin >> n >> t;
  vector<ll> a(n);
  ll sum = 0;
  rep(i, n) {
    cin >> a[i];
    sum += a[i];
  }

  t %= sum;

  ll tot = 0, idx = 0;

  while (true) {
    if (tot + a[idx] > t) break;

    tot += a[idx];
    idx++;
  }

  cout << idx+1 << " " << t - tot << endl;
  return 0;
}
