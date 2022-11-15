#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  vector<ll> l1, l2;
  rep(i, n/2) l1.emplace_back(a[i]);
  for (int i = n/2; i < n; ++i) l2.emplace_back(a[i]);

  auto f = [](vector<ll> x) {
    vector<ll> res;

    rep(i, 1<<x.size()) {
      ll sum = 0;
      rep(j, x.size()) {
        if (i>>j&1) sum += x[j];
      }
      res.emplace_back(sum);
    }
    return res;
  };

  vector<ll> p = f(l1);
  vector<ll> q = f(l2);

  sort(q.begin(), q.end());

  bool ok = false;
  rep(i, p.size()) {
    int pos = lower_bound(q.begin(), q.end(), k-p[i]) - q.begin();
    if (pos < q.size() && q[pos] == k-p[i]) ok = true;
  }

  string ans = "No";
  if (ok) ans = "Yes";
  cout << ans << endl;
  return 0;
}
