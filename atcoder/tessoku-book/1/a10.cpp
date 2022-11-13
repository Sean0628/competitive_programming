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

  int d; cin >> d;
  vector<int> l(d), r(d);
  rep(i, d) {
    cin >> l[i] >> r[i];
    l[i]--; r[i]--;
  }

  vector<int> cmb(n+1, 0), cme(n+1, 0);
  for (int i = 1; i < n; ++i) {
    cmb[i] = max(cmb[i-1], a[i-1]);
    cme[cme.size() - (i+1)] = max(cme[cme.size() - i], a[a.size() - i]);
  }

  rep(i, d) {
   int ans = max(cmb[l[i]], cme[r[i]+1]);
   cout << ans << endl;
  }
  return 0;
}
