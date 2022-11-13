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

  int q; cin >> q;
  vector<int> x(q);
  rep(i, q) cin >> x[i];

  sort(a.begin(), a.end());
  rep(i, n) cout << a[i] << " ";

  rep(i, q) {
    auto itr = lower_bound(a.begin(), a.end(), x[i]);
    int idx = itr - a.begin();
    cout << idx << endl;
  }
  return 0;
}
