#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m, x; cin >> n >> m >> x;
  vector<int> C(n);
  vector a(n, vector<int> (m));

  rep(i, n) {
    cin >> C[i];
    rep(j, m) cin >> a[i][j];
  }

  int mn = INT_MAX;
  rep(i, 1<<n) {
    int cost = 0;
    vector<ll> tot(m);
    rep(j, n) {
      if (i>>j&1) continue;
      cost += C[j];

      rep(k, m) tot[k] += a[j][k];
    }

    bool ok = true;
    rep(j, m) if (tot[j] < x) ok = false;

    if (ok) mn = min(mn, cost);
  }

  if (mn == INT_MAX) mn = -1;
  cout << mn << endl;

  return 0;
}
