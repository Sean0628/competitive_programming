#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int p; cin >> p;
  vector<int> d = { 1, 2*1, 3*2*1, 4*3*2*1, 5*4*3*2*1, 6*5*4*3*2*1, 7*6*5*4*3*2*1, 8*7*6*5*4*3*2*1, 9*8*7*6*5*4*3*2*1, 10*9*8*7*6*5*4*3*2*1 };
  reverse(d.begin(), d.end());

  int cnt = 0;
  rep(i, d.size()) {
    if (p == 0) break;
    if (!(p >= d[i])) continue;

    cnt += (p / d[i]);
    p %= d[i];
  }

  cout << cnt << endl;

  return 0;
}

