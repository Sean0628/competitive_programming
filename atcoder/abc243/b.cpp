#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, ans1 = 0, ans2 = 0;
  cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  rep(i, n) {
    rep(j, n) {
      if (i == j && a[i] == b[j]) ans1++;
      if (i != j && a[i] == b[j]) ans2++;
    }
  }

  cout << ans1 << "\n" << ans2 << endl;

  return 0;
}
