#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int getSum(vector<int>& sum, int l, int r) {
  int res;
  if (l == 0) {
    res = sum[r];
  } else res = sum[r] - sum[l-1];

  return res;
}

int main() {
  int n; cin >> n;
  vector<int> p1(n), p2(n);

  rep(i, n) {
    int c; cin >> c;
    int tp; cin >> tp;
    if (c == 1) p1[i] = tp;
    else p2[i] = tp;
  }

  vector<int> sum1(n), sum2(n);
  rep(i, n) {
    if (i == 0) {
      sum1[i] = p1[i];
      sum2[i] = p2[i];
    } else {
      sum1[i] = sum1[i-1] + p1[i];
      sum2[i] = sum2[i-1] + p2[i];
    }
  }

  int q; cin >> q;
  rep(i, q) {
    int l, r; cin >> l >> r;
    l--; r--;
    int a = getSum(sum1, l, r);
    int b = getSum(sum2, l, r);

    cout << a << " " << b << endl;
  }
  return 0;
}
