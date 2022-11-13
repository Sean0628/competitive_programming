#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  double n; cin >> n;

  double l = 0, r = n;

  while (r-l > 0.0001) {
    double m = (l+r)/2;

    double sum;
    sum = m*m*m + m;
    if (sum > n) r = m;
    else l = m;
  }

  printf("%.4f\n", l);

  return 0;
}
