#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int INF = 2000000000;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int q; cin >> q;
  vector<int> b(q);
  rep(i, q) cin >> b[i];

  sort(a.begin(), a.end());

  rep(i, q) {
    auto iter = lower_bound(a.begin(), a.end(), b[i]);
    int pos = iter - a.begin();
    int d1 = INF, d2 = INF;
    if (pos < n) d1 = abs(b[i] - a[pos]);
    if (pos >= 1) d2 = abs(b[i] - a[pos - 1]);

    cout << min(d1, d2) << endl;
  }
  return 0;
}
