#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, x;
  cin >> n >> x;
  vector<int> a(n), b(n, 0);
  rep(i, n) cin >> a[i];

  int idx = x-1, cnt = 0;
  while (true) {
    if (!b[idx]) {
      b[idx] = 1;
      cnt++;
      idx = a[idx]-1;
    } else break;
  }

  cout << cnt << endl;

  return 0;
}
