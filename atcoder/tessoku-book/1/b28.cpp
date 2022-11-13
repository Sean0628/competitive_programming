#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

const int MOD = 1e9 + 7;

int main() {
  int n; cin >> n;
  vector<int> a(n);

  a[0] = a[1] = 1;
  rep(i, n) {
    if (i < 2) continue;

    a[i] = (a[i-1] + a[i-2])% MOD;
  }

  cout << a[n-1] << endl;
  return 0;
}
