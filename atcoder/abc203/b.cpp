#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, k; cin >> n >> k;

  int sum = 0;
  for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= k; ++j) {
      sum += i*100 + j;
    }
  }

  cout << sum << endl;

  return 0;
}
