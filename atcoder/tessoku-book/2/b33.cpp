#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, h, w; cin >> n >> h >> w;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  int xor_sum;
  rep(i, n) xor_sum = xor_sum ^ a[i] - 1;
  rep(i, n) xor_sum = xor_sum ^ b[i] - 1;

  string ans = "First";
  if (xor_sum == 0) ans = "Second";
  cout << ans << endl;
  return 0;
}

