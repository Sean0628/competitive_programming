#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x, y; cin >> n >> x >> y;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  vector<int> grundy = { 0, 0, 1, 1, 2 };
  int sum = 0;
  rep(i, n) {
    int idx = a[i]%5;
    sum = (sum ^ (grundy[idx]));
  }

  string ans = "First";
  if (sum == 0) ans = "Second";
  cout << ans << endl;

  return 0;
}
