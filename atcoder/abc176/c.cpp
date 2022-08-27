#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n);

  rep(i, n) cin >> a[i];

  ll tot = 0;
  for (int i = 1; i < n; ++i) {
    if (a[i-1] > a[i]) {
      tot += (a[i-1]-a[i]);
      a[i] += a[i-1]-a[i];
    }
  }

  cout << tot << endl;
  return 0;
}
