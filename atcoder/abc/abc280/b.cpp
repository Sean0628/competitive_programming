#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<ll> s(n), a(n);
  rep(i, n) cin >> s[i];

  a[0] = s[0];
  for (int i = 1; i < n; ++i) {
    ll b = 0;
    for (int j = 0; j < i; ++j) {
      b += a[j];
    }
    a[i] = s[i] - b;
  }
  rep(i, n) cout << a[i] << " ";

  return 0;
}
