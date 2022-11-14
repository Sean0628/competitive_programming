#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  sort(a.begin(), a.end());

  int q; cin >> q;
  rep(i, q) {
    int x; cin >> x;

    auto iter = lower_bound(a.begin(), a.end(), x);
    int ans = iter - a.begin();
    cout << ans << endl;
  }
  return 0;
}

