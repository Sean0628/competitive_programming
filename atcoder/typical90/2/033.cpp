#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w; cin >> h >> w;
  int cnt = 0;

  rep(i, h) rep(j, w) {
    if (j%2==0 && i%2==0) cnt++;
  }

  if (h == 1 || w == 1) cnt = h*w;

  cout << cnt << endl;
  return 0;
}
