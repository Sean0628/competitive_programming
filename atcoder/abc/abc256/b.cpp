#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<bool> b(4, false);

  int p = 0;
  rep(i, n) {
    b[0] = true;

    vector<bool> tb(4, false);
    rep(j, 4) {
      if (b[j]) {
        if (j + a[i] >= 4) p++;
        else tb[j + a[i]] = true;
      }
    }

    rep(k, 4) b[k] = tb[k];
  }

  cout << p << endl;

  return 0;
}
