#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;

  vector<int> a(n), b(m), c(n, 0);
  rep(i, n) cin >> a[i];
  rep(i, m) cin >> b[i];

  string ans = "Yes";
  rep(i, m) {
    bool ok = false;

    rep(j, n) {
      if (!c[j] && (b[i] == a[j])) {
        c[j] = 1;
        ok = true;
        break;
      }
    }

    if(!ok) {
      ans = "No";
      break;
    }
  }

  cout << ans << endl;

  return 0;
}
