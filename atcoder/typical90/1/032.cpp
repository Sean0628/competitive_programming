#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector a(n, vector<int> (n));
  vector<int> p(n);
  rep(i, n) rep(j, n) {
    cin >> a[i][j];
    p[i] = i;
  }

  int m; cin >> m;
  vector<int> x(m), y(m);
  rep(i, m) {
    cin >> x[i] >> y[i];
    x[i]--;
    y[i]--;
  }

  vector rel(n, vector<bool> (n));

  rep(i, m) {
    rel[x[i]][y[i]] = true;
    rel[y[i]][x[i]] = true;
  }

  int ans = INT_MAX;
  do {
    bool ok = true;
    int sum = 0;

    rep(i, n-1) {
      if (rel[p[i]][p[i+1]] == true) ok = false;
    }

    rep(i, n) sum += a[p[i]][i];
    if (ok) ans = min(ans, sum);
  } while (next_permutation(p.begin(), p.end()));

  if (ans == INT_MAX) ans = -1;
  cout << ans << endl;

  return 0;
}
