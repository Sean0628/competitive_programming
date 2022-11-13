#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int t, n; cin >> t >> n;
  vector<int> l(n), r(n);
  rep(i, n) cin >> l[i] >> r[i];
  vector<int> b(t);
  rep(i, n) {
    b[l[i]]++;
    b[r[i]]--;
  }

  vector<int> s(t+1, 0);
  rep(i, t) s[i+1] = s[i] + b[i];
  for (int i = 1; i <= t; ++i) cout << s[i] << endl;

  return 0;
}
