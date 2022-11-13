#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, h, w; cin >> n >> h >> w;
  vector<ll> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  int sum = (a[0]-1) ^ (b[0]-1);

  for (int i = 1; i < n; ++i) {
    sum = (sum ^ (a[i]-1) ^ (b[i]-1));
  }

  string ans = "Second";
  if (sum) ans = "First";
  cout << ans << endl;
  return 0;
}
