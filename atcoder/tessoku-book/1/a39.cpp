#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;

  vector<int> r(n), l(n);
  vector<P> tmp;
  rep(i, n) {
    cin >> l[i] >> r[i];
    tmp.emplace_back(make_pair(r[i], l[i]));
  }

  sort(tmp.begin(), tmp.end());

  int curr = 0, ans = 0;

  rep(i, n) {
    if (curr <= tmp[i].second) {
      curr = tmp[i].first;
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}
