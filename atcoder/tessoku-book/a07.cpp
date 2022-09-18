#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int d, n; cin >> d >> n;
  vector<int> l(n), r(n);
  rep(i, n) cin >> l[i] >> r[i];

  vector<int> b(d, 0);
  rep(i, n) {
    if (l[i]-1 >= 0) b[l[i]-1]++;
    if (r[i] < d) b[r[i]]--;
  }
  vector<int> s(d+1, 0);
  rep(i, d) s[i+1] = s[i] + b[i];

  for (int i = 1; i <= d; ++i) {
    cout << s[i] << endl;
  }
  return 0;
}
