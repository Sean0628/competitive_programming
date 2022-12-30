#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> l(n);

  rep(i, n) cin >> l[i];

  int ans = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i+1; j < n; ++j) {
      for (int k = j+1; k < n; ++k) {
        if (l[i] == l[j] || l[j] == l[k] || l[i] == l[k]) continue;
        if (abs(l[i] - l[j]) < l[k] && l[k] < l[i] + l[j]) ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}
