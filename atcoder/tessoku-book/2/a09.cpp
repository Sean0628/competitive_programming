#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int h, w, n; cin >> h >> w >> n;
  vector sum(h+1, vector<int> (w+1));

  rep(i, n) {
    int a, b, c, d; cin >> a >> b >> c >> d;
    a--, b--, c--, d--;

    sum[a][b]++, sum[c+1][d+1]++;
    sum[a][d+1]--, sum[c+1][b]--;
  }

  rep(i, h+1) {
    rep(j, w+1) {
      if (j-1 >= 0) sum[i][j] += sum[i][j-1];
    }
  }
  rep(i, h+1) {
    rep(j, w+1) {
      if (i-1 >= 0) sum[i][j] += sum[i-1][j];
    }
  }

  rep(i, h) {
    rep(j, w) {
      cout << sum[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
