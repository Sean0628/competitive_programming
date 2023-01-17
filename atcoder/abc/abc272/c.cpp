#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> even, odd;

  rep(i, n) {
    int m; cin >> m;
    if (m % 2 == 0) even.emplace_back(m);
    else odd.emplace_back(m);
  }

  sort(even.begin(), even.end());
  sort(odd.begin(), odd.end());

  reverse(even.begin(), even.end());
  reverse(odd.begin(), odd.end());

  int no = -1, ne = -1;

  if (even.size() > 1) ne = even[0] + even[1];
  if (odd.size() > 1) no = odd[0] + odd[1];

  int ans = max(no, ne);
  cout << ans << endl;

  return 0;
}
