#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int xor_sum = a[0];
  for (int i = 1; i < n; ++i) {
    xor_sum = xor_sum ^ a[i];
  }

  string ans = "First";
  if (xor_sum == 0) ans = "Second";
  cout << ans << endl;
  return 0;
}
