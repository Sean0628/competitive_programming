#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n), b(n), ans(1001, 0);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  rep(i, n) for (int j = a[i]; j <= b[i]; ++j) ans[j]++;

  int cnt = 0;
  for (auto& c : ans) if (c == n) cnt++;

  cout << cnt << endl;

  return 0;
}
