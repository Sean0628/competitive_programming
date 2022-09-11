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

  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  ll sum = 0;
  rep(i, n) sum += abs(a[i] - b[i]);
  cout << sum << endl;
  return 0;
}
