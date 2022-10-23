#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  float a, b; cin >> a >> b;
  float ans = b/a;
  printf("%.3f\n", ans);

  return 0;
}
