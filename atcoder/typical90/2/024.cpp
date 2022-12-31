#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;
  vector<int> a(n), b(n);

  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  int diff = 0;
  rep(i, n) diff += abs(a[i]-b[i]);

  string ans = "No";
  if (diff <= k && (diff-k)%2 == 0) ans = "Yes";
  cout << ans << endl;
  return 0;
}
