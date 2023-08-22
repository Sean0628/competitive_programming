#include <vector>
#include <iostream>

#define rep(i, n) for (int i = 0; i < (n); ++i)

using namespace std;
int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  int m; cin >> m;
  vector<int> b(m);
  rep(i, m) cin >> b[i];

  int cnt = 0;
  rep(i, m) {
    int pos = lower_bound(a.begin(), a.end(), b[i]) - a.begin();
    if (pos < n && a[pos] == b[i]) cnt++;
  }

  cout << cnt << endl;
  return 0;
}
