#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  int t[8][8];
  rep(i,n) rep(j, n) cin >> t[i][j];
  vector<int> p;
  for (int i = 1; i < n; ++i) p.push_back(i);
  int ans = 0;
  do {
    int tot = t[0][p[0]];
    rep(i, n-2) tot += t[p[i]][p[i+1]];
    tot += t[p.back()][0];
    if (tot == k) ans++;
  } while (next_permutation(p.begin(), p.end()));

  cout << ans << endl;
  return 0;
}
