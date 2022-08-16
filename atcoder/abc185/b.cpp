#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m, t; cin >> n >> m >> t;
  vector<int> a(m), b(m);

  rep(i, m) cin >> a[i] >> b[i];

  int cur = 0;
  int bat = n;
  rep(i, m) {
    bat -= a[i]-cur;
    cur = a[i];
    if (bat <= 0) {
      cout << "No" << endl;
      return 0;
    }

    bat += b[i]-a[i];
    if (bat > n) bat = n;
    cur = b[i];
  }

  bat -= t-cur;
  if (bat <= 0) {
    cout << "No" << endl;
    return 0;
  }

  cout << "Yes" << endl;

  return 0;
}
