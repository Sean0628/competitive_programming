#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; ll k; cin >> n >> k;

  ll sum = 0;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];
  rep(i, n) sum += abs(a[i]-b[i]);

  bool ok = false;
  if (k >= sum) if ((k - sum)%2 == 0) ok = true;

  cout << (ok ? "Yes" : "No") << endl;
  return 0;
}
