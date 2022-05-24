#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  vector<int> c(360, 0);
  c[0] = 1;

  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int idx = 0;
  rep(i, n) {
    idx += a[i];
    idx %= 360;
    c[idx] = 1;
  }

  int m = 0, cnt = 0;
  for (int i = 0; i <= 360; ++i) {
    if (c[i % 360]) {
      m = max(m, cnt);
      cnt = 0;
    }
    cnt++;
  }

  cout << m << endl;

  return 0;
}

