#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const ll m = 1000000000000000000;

int main() {
  int n; cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  sort(a.begin(), a.end());

  ll sq = 1000000000;
  if (a[0] > sq && a[1] > sq) {
    cout << -1 << endl;
    return 0;
  };

  ll tot = a[0];
  for (int i = 1; i < n; ++i) {
    tot *= a[i];

    if (tot > m) {
      cout << -1 << endl;
      return 0;
    }
  }

  cout << tot << endl;

  return 0;
}
