#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
#define rep(i, n) for (int i = 0; i < (n); ++i)
using ll = long long;
using P = pair<int, int>;

int main() {
  int n; cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];

  vector<P> tmp;
  rep(i, n) tmp.emplace_back(make_pair(x[i], -y[i]));
  sort(tmp.begin(), tmp.end());

  vector<int> a;
  rep(i, tmp.size()) a.emplace_back(-tmp[i].second);

  auto getLis = [](vector<int> v) {
    int len = 0;
    vector<int> l(v.size());

    rep(i, v.size()) {
      int pos = lower_bound(l.begin() + 1, l.begin() + len + 1, v[i]) - l.begin();
      l[pos] = v[i];

      if (pos > len) len++;
    }

    return len;
  };

  cout << getLis(a) << endl;

  return 0;
}
