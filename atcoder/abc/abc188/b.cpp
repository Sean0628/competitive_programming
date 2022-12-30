#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  ll t = 0;

  rep(i, n) t += a[i]*b[i];

  if (t == 0) cout << "Yes" << endl;
  else cout << "No" << endl;

  return 0;
}
